//Define transaction
const menu = {
    name: 'Salted Caramel Ice Cream',
    price: 2.95,
    ingredients: ['butter', 'ice cream', 'salt', 'sugar']
  }


document.write('Ingredients: ' + menu.ingredients + '</br>');

const bicycle = {
    color: 'blue',
    type: 'mountain bike',
    wheels: {
      diameter: 18,
      width: 8
    }
  };

document.write('Bicyle wheel dia: ' + bicycle.wheels.diameter + '</br>');

const greetings = {
    hello: {
      english: 'hi',
      french: 'bonjour',
      portuguese: 'oi'
    },
    goodbye: {
      english: 'bye',
      french: 'au revoir',
      portuguese: 'tchau'
    }
  };

  document.write('Hello in portugese: ' + greetings.hello.portuguese + '</br>');
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