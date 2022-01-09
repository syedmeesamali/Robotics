const triangle = {
  type: 'scalene',
  identify: function () {
    return (`This is a ${this.type} triangle.`);
  }
};
document.write('</br></br>');
document.write('Triangle type: ' + triangle.identify() + '</br>');

/*
Create an object called `chameleon` with two properties:
1. `color`, whose value is initially set to 'green' or 'pink'
2. `changeColor`, a function which changes `chameleon`'s `color` to 'pink'
    if it is 'green', or to 'green' if it is 'pink'
*/
const chameleon = {
  color: 'pink',
  changeColor: function () {
    if (this.color == 'green')
        this.color = 'pink';
    else 
        this.color = 'green';
  }
};
chameleon.changeColor()
document.write('Chameleon color is: ' + chameleon.color + '</br>');