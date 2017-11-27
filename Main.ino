void setup() {
// sets the button/Pot as input
  pinMode(button, INPUT);
  pinMode(pot, INPUT);
  
// sets led as out
  for(int pinSet =1; pinSet <= 4; pinSet++){
    pinMode(pinSet, OUTPUT);  
    }
    
  /*pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT); */
  
// turns on serial communication
  Serial.begin(9600);
}

void loop(){
 
//sets current state as 0 or 1
  currentState = digitalRead(button);

//compare states
  if(currentState != previousState) {
    //button pressed
    if(currentState == HIGH){
      counter++;
      //Serial.print("a");
      //Serial.print(counter);
      //Serial.print('\n');
      }
//button not pressed
    else{
      }
     delay(50);
    }
    previousState = currentState;
    
// turns on LED
  if(counter == 1){
    digitalWrite(led1, HIGH);
    digitalWrite(led4, LOW);
    Serial.write(counter);
    }
  if(counter == 2){
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    Serial.write(counter);
    } 
  if(counter == 3){
    digitalWrite(led3, HIGH);
    digitalWrite(led2, LOW);
    Serial.write(counter);
    } 
  if(counter == 4){
    digitalWrite(led4, HIGH);
    digitalWrite(led3, LOW);
    Serial.write(counter);
    }

  /*for(int x = 1; x >= 4; x++);
  for(int y = 1; y >= 4; y++); 
  for(int z = 4; z <= 1; z--);
   if(counter == x){
    digitalWrite(ledy,HIGH);
    digitalWrite(ledz,LOW);
    Serial.write(counter);
    }  */
        
//counter 1 return
  if(counter == 5){
    counter = 1;
    }

//reads analog values
    prepv = analogRead(pot);
    delay(50);
    pv = analogRead(pot);
//prints to serial    
  if(prepv != pv){
    pv = map(pv, 0, 1023, 0, 127);
    //Serial.print("b");
    //Serial.print (pv);
    //Serial.print('\n');
    
  }
}
