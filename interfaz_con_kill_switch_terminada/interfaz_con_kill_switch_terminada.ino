
int switchState = 0;
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;

 
void setup() {
  
  pinMode(3, OUTPUT);
 pinMode(4, OUTPUT); 
 pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
   pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
encenderLuces();
  }
  else {
    apagarLuces();
  }
  

}

void apagarLuces(){
     digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
}

void encenderLuces(){
     // pon lo que quieras ejecutar
     switchState = digitalRead(2);
  // esto es un comentario

 if (switchState == LOW){
  // el botón no está pulsado

  digitalWrite(3,HIGH); // LED verde
    digitalWrite(4,LOW); // LED rojos
      digitalWrite(5,LOW); // LED rojos
}

else { // the button is pressed
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);

   delay(250); // espera un cuarto de segundo
   // permuta los LEDs
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   delay(250);
}

}

void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
 //vuelve al inicio del bucle
