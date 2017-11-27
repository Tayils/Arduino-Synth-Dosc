//constant variables
int button = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int pot = A0;
char b;
int time = 0;
int debounce = 20;

//variable variables
int counter = 0;  //counts presses
int currentState = 0; //the current state of the button
int previousState = 0;  //the previous state of the button
long prepv;
long pv;
