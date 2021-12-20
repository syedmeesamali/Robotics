//Define object - proto
const proto = {
    sender: 'ali@ali.com',
};

//Object child
const child = Object.create(proto);
child.recipient = 'syed@ali.com';
document.write(child.sender + '</br>');
document.write(child.recipient + '</br>');

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
document.write('Funds added: ' + moneyTransaction.funds + '</br>');
document.write(Object.getPrototypeOf(moneyTransaction) === transaction);
document.write('</br></br><p>');
document.write('Sender: ' + moneyTransaction.sender + '</br>');
document.write('Funds now: ' + moneyTransaction.funds + '</br>');

const moneyTrx = Object.create(transaction, {
    funds: {
        value: 0.0,
        enumerable: true,
        writable: true,
        configurable: false
    }
});