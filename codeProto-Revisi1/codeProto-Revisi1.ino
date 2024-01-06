/*
---CATATAN---
1. kenapa dipisah? -> val1[] sama val2[]  lebih efisien jadi satu value contoh sens_val[]
2. Pembacaan sensor gak efisien masih pakai delay, lebih baik pakai millis
3. Algoritma pembacaan salah, bukan ganti sensor kanan ke kiri terus baru dibaca, tapi kanan baca lalu ganti kiri baca
4. Pembacaan sensor gak perlu pakai while, if lebih efisien, menghindari nested
5. Penggunaan nama variabel kurang jelas, contoh sens[] ?????? -> sensor_pin[]......
6. Program gak perlu di sum, karena pembacaan nilai per sensor bukan nilai rata2 sensor
7. PID nanti dulu!!!

PELAJARI DULU SOAL MILLIS, NESTED, PERBEDAAN IF SAMA WHILE, ALGORITMA DASAR PROSEDURAL
*/

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
