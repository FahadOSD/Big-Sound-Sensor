


// NeuralMesh Solution

const int soundSensorPin = A0;  // Analog pin for sound sensor
const int ledPin = 13;         // Digital pin for LED

int threshold = 40;  // Adjust this threshold value based on your sensor's sensitivity

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundValue = analogRead(soundSensorPin);

  Serial.println("Sound Value: " + String(soundValue));

  if (soundValue > threshold) {
    digitalWrite(ledPin, HIGH);
    delay(500);  // Adjust delay time if needed
  }
  else{
    digitalWrite(ledPin, LOW);
    delay(500);  // Adjust delay time if needed
  }
  
}
