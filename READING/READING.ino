//Inisialisasi Transistor
#define transR 2
#define transL 4

unsigned long lastSwitch = 0;
//Pengkondisian pin saat switch
bool pin_condition1 = LOW;
bool pin_condition2 = HIGH;

//Transistor time reading
unsigned long transT_x = 0;
unsigned long transStart = 0;
unsigned long switchTrans = 200;

void setup (){
pinMode(transR, OUTPUT);
pinMode(transL, OUTPUT);
Serial.begin(9600);

}

void loop(){

lastSwitch = millis();

//Kondisi switch kanan kiri transistor
if (((lastSwitch - transT_x) > transStart) && ((lastSwitch - transT_x) < switchTrans)){
  pin_condition1 = !pin_condition1;

  if(pin_condition1){
    digitalWrite(transR, HIGH);
 }else{
  digitalWrite(transR, LOW);
 }
  }
  
  
  if (((lastSwitch - transT_x) > transStart) && ((lastSwitch - transT_x) < switchTrans)){

  pin_condition2 = !pin_condition2;
  if(pin_condition2){
    digitalWrite(transL, HIGH);
 }else{
  digitalWrite(transL, LOW);
 }
  }

transT_x = lastSwitch;

 Serial.print(lastSwitch + "\t");
 Serial.print(transT_x);
 Serial.println();
delay (200);
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void reading(){

}