//Define transaction
const menu = {
    name: 'Salted Caramel Ice Cream',
    price: 2.95,
    ingredients: ['butter', 'ice cream', 'salt', 'sugar']
  }
document.write('Ingredients: ' + menu.ingredients + '</br>');

  let originalObject = {
    favoriteColor: 'red'
  };
  function setToBlue(object) {
    object.favoriteColor = 'blue';
  }
  
  setToBlue(originalObject);
  document.write('Fav color: ' + originalObject.favoriteColor + '</br>');

  let string = 'orange';
  function changeToApple(string)
  {
    string = 'Apple';
  }
  document.write('Change it: ' + string + '</br>');

  const triangle = {
    type: 'scalene',
    identify: function () {
      return (`This is a ${this.type} triangle.`);
    }
  };

  document.write('Triangle type: ' + triangle.identify() + '</br>');