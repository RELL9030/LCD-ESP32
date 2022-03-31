/*
 * Date: 12/03/2022
 * Title: LCD 16x2 & ESP32
 * Author: Rubén Lozano
 * 
 * Referencias: http://electronoobs.com/eng_arduino_tut163.php
 *              
*/

#include <LiquidCrystal.h>  

#define RS 5 //PIN D19 o D5
#define EN 17 //PIN D18 o TX2 GPIO17
#define DB4 16 //PIN D5 o RX2 GPIO16
#define DB5 4 //PIN D4
#define DB6 2 //PIN D2
#define DB7 15 //PIN D15


LiquidCrystal lcd(RS, EN, DB4, DB5, DB6, DB7); //Pines para conexión LCD

/*
 *****************************************************
 *    SETUP
 *****************************************************
*/
void setup()
{
  Serial.begin(115200);      //Inicialización del bus serial
  lcd.begin(16, 2);         //Inicialización de la pantalla LCD 16x2.
  lcd.clear();              //Limpieza de pantalla
  lcd.setCursor(0, 0);      //Posición del cursor (F,C)
  lcd.print("Bienvenido");  //Impresion de mensaje inicial
  lcd.setCursor(0, 1);
  lcd.print("..........");
}

/*
 *****************************************************
 *    LOOP
 *****************************************************
 */
 
void loop()
{
   // Cambia el cursor a columna 0, línea 1
  // (nota: la línea 1 es la segunda fila, ya que el conteo comienza con 0):
  lcd.setCursor(0, 1);
  // imprime el número de segundos desde el reinicio:
  lcd.print(millis() / 1000);
}
