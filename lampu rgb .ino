// Pin LED RGB
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Merah
  setColor(255, 0, 0);
  delay(1000);

  // Hijau
  setColor(0, 255, 0);
  delay(1000);

  // Biru
  setColor(0, 0, 255);
  delay(1000);

  // Kuning (Merah + Hijau)
  setColor(255, 255, 0);
  delay(1000);

  // Cyan (Hijau + Biru)
  setColor(0, 255, 255);
  delay(1000);

  // Magenta (Merah + Biru)
  setColor(255, 0, 255);
  delay(1000);

  // Putih (semua nyala)
  setColor(255, 255, 255);
  delay(1000);
}

// Fungsi setColor
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
