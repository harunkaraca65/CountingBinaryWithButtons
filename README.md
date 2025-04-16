# CountHexadecimalWithButtons
 
English Description
This project implements a 4-bit binary counter using an STM32F4 microcontroller. The counter can count up, count down, and pause/resume operations controlled by external buttons. The current count is displayed using 4 LEDs that show the binary representation of the number (0-15).

Key Features:
Counting Modes:

Count up (increment from 0 to 15)

Count down (decrement from 15 to 0)

Pause/Resume Functionality: The counter can be paused and resumed from where it stopped

Visual Feedback: 4 LEDs display the current count in binary format

Interrupt-Based Control: Button presses are handled through external interrupts

Timer-Based Timing: Uses TIM1 for precise timing of count intervals

Hardware Requirements:
STM32F1 microcontroller

3 push buttons (for up, down, and pause)

4 LEDs (to display binary count)

Appropriate resistors for LEDs and buttons

Türkçe Açıklama
Bu proje, STM32F4 mikrodenetleyici kullanılarak geliştirilmiş bir 4-bit binary sayıcı uygulamasıdır. Sayıcı, yukarı sayma, aşağı sayma ve dış butonlarla kontrol edilebilen duraklat/devam ettir özelliklerine sahiptir. Mevcut sayım, sayının binary gösterimini (0-15) gösteren 4 LED ile görüntülenir.

Temel Özellikler:
Sayım Modları:

Yukarı sayma (0'dan 15'e artarak)

Aşağı sayma (15'ten 0'a azalarak)

Duraklat/Devam Ettir: Sayıcı duraklatılabilir ve kaldığı yerden devam ettirilebilir

Görsel Geri Bildirim: 4 LED, mevcut sayımı binary formatta gösterir

Kesinti Tabanlı Kontrol: Buton basmaları external interrupt'lar ile yönetilir

Zamanlayıcı Tabanlı Zamanlama: Sayım aralıkları için TIM1 kullanılır

Donanım Gereksinimleri:
STM32F1 mikrodenetleyici

3 adet buton (yukarı, aşağı ve duraklatma için)

4 adet LED (binary sayımı göstermek için)

LED'ler ve butonlar için uygun dirençler

Proje, STM32 HAL kütüphaneleri kullanılarak geliştirilmiştir ve temel mikrodenetleyici programlama konseptlerini (GPIO kontrolü, interrupt işleme, timer kullanımı) göstermektedir.