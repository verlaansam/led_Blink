/* LED_Blink
 *  
 *  laat een LED knipperen om de seconde
 *  
 *  voor bedradings diagram zie LED_Blink.png
 *  
 *  auteur: Sam Verlaan
 *  januari 2021
 */

//de LED is aangesloten op pin 8 
const int LED = 8

//in de setup zeg je wat er op welke pin zit
void setup() {
  pinMode(LED, OUTPUT); //we geven aan dat de LED een output is. Er gaat dus stroom uit de arduino naar de LED
}

// loop is een herhalend stukje code dat steeds opnieuw begint
void loop() {
  digitalWrite(LED HIGH);   //hier zetten we de LED aan. HIGH betekent dat je stroom naar de LED stuurd
  delay(1000);                       // We wachten een seconde
  digitalWrite(LED, LOW);    // Hier zetten we de LED uit. LOW betekent dat er geen stroom naar de LED word gestuurd
  delay(1000);                       //we wachten weer een seconden
  //de loop begint weer boven aan en zet de LED dus aan
}
