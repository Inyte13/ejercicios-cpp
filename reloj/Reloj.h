class Reloj {
 private:
  int hr;
  int min;
  int sec;

 public:
  // Constructor predeterminado
  Reloj(int horas = 0, int minutos = 0, int segundos = 0);
  void setTime(int horas, int minutos, int segundos);
  // El const en fn (solo válido en clases), asegura que cambian las variables
  // de la clase
  void printTime() const;
  void incrementHours();
  void incrementMinutes();
  void incrementSeconds();
  // El const en parámetro nos indica que no cambiara
  // El Operador de Referencia (&) se explica en 02-copia-referencia
  bool esIgual(const Reloj& otroReloj) const;
};