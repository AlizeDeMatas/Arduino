//Arduino PWM Speed Control：
int M1 = 4;
int E1 = 5;
int E2 = 6;
int M2 = 7;
int inputVal = 0;
const int ProxSensor = A2;

void setup()
{
    pinMode(E1, INPUT);
    pinMode(E2, INPUT);
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);
    pinMode(ProxSensor,INPUT);    //Pin 2 is connected to the output of proximity sensor
    Serial.begin(9600);
}

void loop()
{
      digitalWrite(M1, HIGH);
      digitalWrite(M2, HIGH);
    //}
    /*else{
      digitalWrite(E1,LOW);
//      digitalWrite(M1, HIGH) Reverse
      digitalWrite(E2, LOW);
//      digitalWrite(M2, HIGH) Reverse
    }*/
  delay(100);
}
