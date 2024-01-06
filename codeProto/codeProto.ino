#define select1 1 //Transistor 1
#define select2 2 //Transistor 1

int sens[] = {A1, A2,A3, A4, A5, A6, A7};
int val1[], int val2[];
int S1sum, S2sum;

void Reading() {
  int size = sizeof(sens)/sizeof(sens[0]);
  digitalWrite (select1, HIGH) ;
  delay(1);
  digitalWrite (select1, LOW) ;
  digitalWrite (select2, HIGH) ;
  delay(1);
  digitalWrite (select2, LOW) ;
  while( select1 == HIGH) {
    for(int i = 0; i < size; i++) {
      val1[] = Analogread(sens[i]);
      }
      }
  while( select2 == HIGH) {
    for(int i = 0; i < size; i++) {
      val2[] = Analogread(sens[i]);
      }
      }
  //Hasil Reading atas menjadi acuan dalam menerapkan kontrol PID    
  void PID(val1, val2) ;
}

void PID(int x[], int y[]){
  //Nyusul mas iseh sinau hehe
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
