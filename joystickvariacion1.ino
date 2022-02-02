const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 

const int pinLed = 9;

//Definición de variables globales 

 int estadoBoton = 1;

void setup() {
//inicializaciones
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
//código que se ejecuta solo una vez. Calibraciones  
}

void loop() {
 estadoBoton= digitalRead(pinBoton);
 if (estadoBoton == LOW){
  digitalWrite(pinLed, HIGH);
 }
 else{
  digitalWrite(pinLed, LOW);
 }
} 
