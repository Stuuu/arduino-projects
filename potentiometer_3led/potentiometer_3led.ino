
int potV = 0;

void setup() {
 Serial.begin(9600);

 pinMode(6,0);
 pinMode(5,1);
 pinMode(7,0);
}


void loop() {

    potV = analogRead(A0);

    Serial.println(potV);

    if (potV > 300) {
      digitalWrite(7,1);
    } else {
      digitalWrite(7,0);
      digitalWrite(6,0);
      digitalWrite(5,0);
    }

    
    if (potV > 600) {
      digitalWrite(7,1);
      digitalWrite(6,1);
    } else {
//      digitalWrite(7,0);
//      digitalWrite(6,0);
//      digitalWrite(5,0);
    }

        if (potV > 900) {
      digitalWrite(7,1);
      digitalWrite(6,1);
      digitalWrite(5,1);
    } else {
//      digitalWrite(7,0);
//      digitalWrite(6,0);
//      digitalWrite(5,0);
    }
    

}
