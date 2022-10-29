let serial;          // variable to hold an instance of the serialport library
let portName = '/dev/tty.usbserial-120';  // fill in your serial port name here

let inData;
let trueReading;
let r, g, posY;
 
function setup() {
  serial = new p5.SerialPort();       // make a new instance of the serialport library
  serial.on('list', printList);  // set a callback function for the serialport list event
  serial.on('connected', serverConnected); // callback for connecting to the server
  serial.on('open', portOpen);        // callback for the port opening
  serial.on('data', serialEvent);     // callback for when new data arrives
  serial.on('error', serialError);    // callback for errors
  serial.on('close', portClose);      // callback for the port closing
 
  serial.list();                      // list the serial ports
  serial.open(portName);              // open a serial port
  
  createCanvas(400,300);
}

// get the list of ports:
function printList(portList) {
  // portList is an array of serial port names
  for (var i = 0; i < portList.length; i++) {
    // Display the list the console:
    console.log(i + portList[i]);
  }
}

function serverConnected() {
  console.log('connected to server.');
}
 
function portOpen() {
  console.log('the serial port opened.')
}
 
function serialEvent() {
  // inData = Number(serial.read());
  let inString = serial.readStringUntil('\r\n'); // store the data in a variable
  if (inString.length > 0){
    trueReading = inString; // store into global variable
    console.log(trueReading);
  }
}
 
function serialError(err) {
  console.log('Something went wrong with the serial port. ' + err);
}
 
function portClose() {
  console.log('The serial port closed.');
}

function draw() {
   r = map (trueReading, 0, 1023, 0, 255);
   b = map (trueReading, 0, 1023, 255, 0);
   posY = map (trueReading, 0, 1023, 50, height-50);
   background(color(r, 10, b));
   fill(255);
   textSize(30);
   text("Reading: " + trueReading, 30, posY);
}