int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 500;

void setup() {
  

   pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
  tocarMelodia();

  }

}

void tocarMelodia(){

  //Primea parte
  tocarNota(7,1); //do
  tocarNota(-1,0.1); //silencio
  tocarNota(7,0.5); //do
  tocarNota(-1,0.1); 
  tocarNota(7,0.5);
  tocarNota(-1,0.1);
  //
  tocarNota(7,1);
  tocarNota(-1,0.1); // silencio
  tocarNota(6,1); // si
  tocarNota(-1,0.1);
  tocarNota(5,1);// la
  tocarNota(-1,0.1);
  //
  tocarNota(6,1.5); //si
  tocarNota(4,1); // sol sostenido
  //
  tocarNota(2,2);
  //
  tocarNota(8,1);
  tocarNota(-1,0.1); //silencio
  tocarNota(8,.5);
  tocarNota(-1,0.1); //silencio
  tocarNota(8,.5);
  tocarNota(-1,0.1); //silencio
  //
  tocarNota(8,1);
  tocarNota(7,0.5);
  tocarNota(6,0.5); // si
  //
  
  //silencio final

  tocarNota(-1,5);
}

void tocarNota(int numeroNota, float duracionNota) {
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra*duracionNota;
  //
if (numeroNota == -1) {
  // tocar un silencio
  noTone(pin);
  delay(duracionMilisegundos);
}
else {
  // tocar una nota
  int frecuencia = freqs[numeroNota];
    tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
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
