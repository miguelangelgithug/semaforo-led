// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
}

void loop()
{
  digitalWrite(9, HIGH);//encendido rojo
  delay(6000); // tiempo encendido rojo
  digitalWrite(9, LOW);
  delay(500); // tiempo apagado
  
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
  delay(500); // tiempo apagado
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
  delay(500); // tiempo apagado
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
  digitalWrite(7, HIGH);//encendido verde
  delay(6000); // tiempo encendido verde
  digitalWrite(7, LOW);
  delay(500); // tiempo apagado
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
  delay(500); // tiempo apagado
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
  delay(500); // tiempo apagado
  digitalWrite(8, HIGH);//encendido amarillo
  delay(500); // tiempo encendido
   digitalWrite(8, LOW);
}