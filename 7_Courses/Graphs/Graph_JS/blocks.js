//Define transaction
const transaction = {
    sender: 'ali@ali.com',
    recipient: 'syed@ali.com'
};

const moneyTransaction = Object.create(transaction);
moneyTransaction.funds = 0.0;
moneyTransaction.addFunds = function addFunds(funds = 0)
{
    this.funds += Number(funds);
}

//Now add some real funds
moneyTransaction.addFunds(10.0);
const moneyTrx = Object.create(transaction, {
    funds: {
        value: 0.0,
        enumerable: true,
        writable: true,
        configurable: false
    }
});

//Hash transaction now
const hashTrx = Object.create(transaction);
hashTrx.calculateHash = function calculateHash() {
    const data = [this.sender, this.recipient].join('');
    let hash = 0, i = 0;
    while (i < data.length)
    {
        hash = ((hash << 5) - hash + data.charCodeAt(i++)) << 0;
    }
    return hash**2;
}

document.write('Hash calculation: ' + hashTrx.calculateHash() + '</br>');
//hashTrx.calculateHash();

//New function as Transaction
function Transaction(sender, recipient)
{
    this.sender = sender;
    this.recipient = recipient;
}

//Independed hash transaction employing transaction as well as hashing inside
function HashTransaction(sender, recipient)
{
    if (!new.target)
    {
        return new HashTransaction(sender, recipient);
    }
    Transaction.call(this, sender, recipient);
    this.calculateHash = function calculateHash() {
        const data = [this.sender, this.recipient].join('');
        let hash = 0, i = 0;
        while (i < data.length)
        {
            hash = ((hash << 5) - hash + data.charCodeAt(i++)) << 0;
        }
        return hash**2;
    }
}

document.write('New hash calculation: ' + HashTransaction('ali@ali.com', 'ali@ali.com').calculateHash() + '</br>');
document.write('Sender is: ' + HashTransaction('ali@ali.com', 'ali@ali.com').sender + '</br>');