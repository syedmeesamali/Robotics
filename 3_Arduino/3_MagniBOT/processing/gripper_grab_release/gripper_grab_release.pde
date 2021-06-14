import processing.serial.*;    //Include the serial object library
Serial myPort;
int serialVal = 0;

Button grab;
Button release;

//Main setup function
void setup() {
  printArray(Serial.list());
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  print(portName);
  
  size(300,250);
  //background(40, 40, 40);
  frameRate(10);      //Canvas animation update frame-rate
  // create the button object
  grab = new Button("Grab", 20, 20, 150, 50);
  release = new Button("Release", 20, 80, 150, 50);
}

//Main draw function to draw the buttons only
void draw() {
  grab.Draw();
  release.Draw();
}

// Mouse button clicked
void mousePressed()
{
  if (grab.MouseIsOver()) {
    myPort.write('1');
    println("Sent 1 to serial port!");
  } else if (release.MouseIsOver()) {
    myPort.write('2');
    println("Sent 2 to serial port!");
  } else {
    myPort.write('0');
  }
  
}

//MAIN BUTTON CLASS
class Button {
  String label;
  float x;
  float y;
  float w;
  float h;
  Button(String labelB, float xpos, float ypos, float width, float height) {
      label = labelB;
      x = xpos;
      y = ypos;
      w = width;
      h = height;
  }

  void Draw() {
    fill(218);
    stroke(141);
    rect(x, y, w, h, 10);
    textAlign(CENTER, CENTER);
    fill(0);
    text(label, x + (w / 2), y + (h / 2));
  }
  boolean MouseIsOver() {
    if (mouseX > x && mouseX < (x + w) && mouseY > y && mouseY < (y + h)){
      return true;
    } return false;
  }
}
