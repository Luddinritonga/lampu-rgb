# 🚦 Arduino RGB LED - Project Sederhana

Project sederhana menggunakan **Arduino Uno** dan **LED RGB (common anode)** untuk menghasilkan efek lampu merah, hijau, dan biru yang menyala bergantian. [Jalankan langsung di Wokwi](https://wokwi.com/projects/437798181425114113)

Cocok untuk pemula yang ingin belajar: [Tonton tutorial di YouTube](https://www.youtube.com/@Ri.tonga24)
- Cara menggunakan LED RGB
- Konsep **common anode vs common cathode**
- Dasar **PWM (analogWrite)** di Arduino

---

## 🛠 **Komponen**
- Arduino Uno (atau Nano/Mega)
- LED RGB (common anode)
- 3 resistor 220Ω
- Breadboard & kabel jumper

---

## ⚡ **Skema Wiring Sederhana**

- Kaki paling panjang (common anode) → **+5V Arduino**
- Kaki warna merah (R) → resistor → pin 9 Arduino
- Kaki warna hijau (G) → resistor → pin 10 Arduino
- Kaki warna biru (B) → resistor → pin 11 Arduino

> Pastikan resistor dipasang hanya di kaki R, G, dan B, bukan di kaki common.

---

## 💻 **Kode Arduino Contoh**
```cpp
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
```
## 📷 **skema / rangkaian**

![Lampu RGB Arduino](https://github.com/Luddinritonga/lampu-rgb/blob/main/skema.png)

## 🔧 **Cara Upload**
1. Sambungkan Arduino ke PC via kabel USB
2. Buka file `.ino` di Arduino IDE
3. Pilih board dan port yang sesuai
4. Upload kode ke Arduino




## 📫 Contact Me
[![Website](https://img.shields.io/badge/Website-000000?style=for-the-badge&logo=about-dot-me&logoColor=white)](https://luddinritonga.github.io/fortopolio/)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/luddinritonga)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:luddinritonga03@gmail.com)
[![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@Ri.tonga24)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/luddin-ritonga-727920307?)
