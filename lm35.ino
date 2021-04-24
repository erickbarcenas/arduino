int pin = A0 ;              // Este pin lee la temperatura
int umbral = 28 ;            // Indica la temperatura en la que enciende el ventilador
const int control = 9 ;    // Controla el ventilador

void setup()
{
    Serial.begin(115200);
    pinMode(control, OUTPUT) ;
}

void loop()
{
    int lectura = analogRead(pin);
    float voltaje = (5.0 * lectura) /1023; // Atencion aqui
    float temp = voltaje * 100;
    Serial.println(temp) ;
    if (temp >= umbral)
        digitalWrite(control, HIGH);
    else
       digitalWrite(control, LOW);

    delay(200);
}

# https://youtu.be/rEBT9evGeFY
# https://www.carrod.mx/products/practica-sensor-de-temperatura-y-ventilador
