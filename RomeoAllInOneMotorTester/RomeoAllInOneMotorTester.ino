int M1 = 5; //MOTOR #1 (HIGH = MOVE, LOW = STOP)
int E1 = 4; //Relay #1 Set to HIGH for reverse direction, LOW/Nothing = FORWARD

int M2 = 7; //MOTOR #2 (HIGH = MOVE, LOW = STOP)
int E2 = 6; //Relay #2 Set to HIGH for reverse direction, LOW/Nothing = FORWARD

void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(E2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(M1,LOW);
  digitalWrite(M2, HIGH);
//  digitalWrite(E1,HIGH);
//  digitalWrite(E2, HIGH);
  
}
