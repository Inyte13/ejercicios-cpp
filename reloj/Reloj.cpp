#include "Reloj.h"

#include <iomanip>
#include <iostream>

using namespace std;
Reloj::Reloj(int horas, int minutos, int segundos) {
  setTime(horas, minutos, segundos);
}
void Reloj::setTime(int horas, int minutos, int segundos) {
  hr = (0 <= horas && horas < 24) ? horas : 0;
  min = (0 <= minutos && minutos < 60) ? minutos : 0;
  sec = (0 <= segundos && segundos < 60) ? segundos : 0;
}
void Reloj::printTime() const {
  cout << setfill('0') << setw(2) << hr << ":" << setw(2) << min << ":"
       << setw(2) << sec;
}
void Reloj::incrementHours() {
  hr++;
  if (hr >= 24) {
    hr = 0;
  }
}
void Reloj::incrementMinutes() {
  min++;
  if (min >= 60) {
    min = 0;
    incrementHours();
  }
}
void Reloj::incrementSeconds() {
  sec++;
  if (sec >= 60) {
    sec = 0;
    incrementMinutes();
  }
}
bool Reloj::esIgual(const Reloj& otroReloj) const {
  return (hr == otroReloj.hr && min == otroReloj.min && sec == otroReloj.sec);
}
