
float sensor=A0;
float gas_value;
int green=2;
int red=3;
int blue=4;
const int buzzer=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    gas_value=analogRead(sensor);
    Serial.println(gas_value);
    if(gas_value>=850.00)
    {
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
      tone(buzzer,1000);
      delay(5000);
      noTone(buzzer);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
    else
    {
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(2,HIGH);
      delay(1000);
    }
}
