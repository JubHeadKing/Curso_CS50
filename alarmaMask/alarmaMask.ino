

int Red = 2;
int Green = 3;
const int Buzz = 4;

int option;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    option = Serial.read();
    Serial.println(option);
    if(option == 'R'){
      digitalWrite(Red, HIGH);
      digitalWrite(Green, LOW);
      tone(pinBuzzer, 440);
    }
    if(option == 'G'){
      digitalWrite(Red, LOW);
      digitalWrite(Green, HIGH);
      noTone(pinBuzzer);
    }
  }
}
