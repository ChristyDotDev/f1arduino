
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   
   Serial.begin(115200);
   Serial.setTimeout(1);
}


void loop() {
  while (!Serial.available());
  int x = Serial.readString().toInt();
   
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  if(x == 1){
    digitalWrite(LED1, HIGH);
  } else if(x == 2){
    digitalWrite(LED2, HIGH);
  } else if(x == 3){
    digitalWrite(LED3, HIGH);
  }

  Serial.print("THANKS");
}
