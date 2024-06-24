# Arduino Bluetooth Auto met LED's en Buzzer

Dit project is gemaakt door Xiam Schurink voor een schoolopdracht bij Noorderpoort. Het beschrijft hoe je een Arduino-auto kunt bouwen die kan worden bestuurd via Bluetooth met behulp van een mobiele app en die LED's en een buzzer heeft voor extra functionaliteit. Met dit project kun je leren over het gebruik van Bluetooth-communicatie, het aansturen van motoren, en het bedienen van LED's en een buzzer met een Arduino.

![Arduino Auto](https://i.imgur.com/BK7zd8b.jpeg)

Ik heb gebruik gemaakt van de "Arduino Bluetooth Controller" app van "Giristudio" deze is ALLEEN te gebruiken met een android smartphone.
Als je benieuwd bent naar waarom je alleen gebruik kan maken van een android telefoon dan heb ik hier een linkje met de uitleg: [stackoverflow](https://stackoverflow.com/questions/75875083/bluetooth-communication-between-mobile-app-and-arduino-hc-06-module)

## Benodigdheden

- Arduino Uno (of een vergelijkbaar compatibel bord)
- Motor Driver Shield (bijv. L298N)
- Bluetooth-module (bijv. HC-05 of HC-06)
- 4 gelijkstroommotoren
- Wielen voor de auto
- Batterijhouder (met geschikte batterijen)
- Jumperdraden
- LED's
- Buzzer
- Weerstanden (indien nodig)
- Chassis voor de auto
- Smartphone met Bluetooth

## Links

- [Arduino kit](https://nl.aliexpress.com/item/1005003701900466.html?spm=a2g0o.productlist.main.5.1f67296bYtqlR9&algo_pvid=165394b1-b930-4d70-89be-0ff1d89dafa1&algo_exp_id=165394b1-b930-4d70-89be-0ff1d89dafa1-2&pdp_npi=4%40dis%21EUR%2121.55%2114.95%21%21%2122.87%2115.87%21%40210385bb17109227640817235ecf77%2112000026861518543%21sea%21NL%210%21AB&curPageLogUid=CtvGMVlRzwff&utparam-url=scene%3Asearch%7Cquery_from%3A)
- [Arduino motoren en banden](https://nl.aliexpress.com/item/1005006194310479.html?spm=a2g0o.productlist.main.13.57c0345b4HFNWI&algo_pvid=ada4502f-0f3f-432c-a8f6-347443675bd8&algo_exp_id=ada4502f-0f3f-432c-a8f6-347443675bd8-6&pdp_npi=4%40dis%21EUR%214.06%210.46%21%21%2131.08%213.50%21%40211b801617109230291458403efa55%2112000036215725117%21sea%21NL%210%21AB&curPageLogUid=DOlMj8nHaRen&utparam-url=scene%3Asearch%7Cquery_from%3A)
- [HC06 voor de connectie](https://nl.aliexpress.com/item/1005005648270683.html?spm=a2g0o.productlist.main.1.665e38c1E2Evav&algo_pvid=1475215c-c57d-4046-b954-0c09b7511a59&algo_exp_id=1475215c-c57d-4046-b954-0c09b7511a59-0&pdp_npi=4%40dis%21EUR%217.28%210.46%21%21%2155.71%213.54%21%40211b801617109230836821865efa55%2112000035880571903%21sea%21NL%210%21AB&curPageLogUid=0Hb8IQXsL4wI&utparam-url=scene%3Asearch%7Cquery_from%3A)


## Installatie

1. Sluit de motor driver shield aan op de Arduino Uno.
2. Sluit de gelijkstroommotoren aan op de motor driver shield.
3. Sluit de LED's en buzzer aan op de Arduino Uno, zorg ervoor dat je de weerstanden gebruikt om de juiste stroom te regelen.
4. Sluit de Bluetooth-module aan op de Arduino Uno.
5. Bevestig de wielen aan de gelijkstroommotoren en monteer deze op het chassis van de auto.
6. Zorg ervoor dat alle verbindingen goed zijn vastgezet en controleer de polariteit om kortsluiting te voorkomen.

## Software

1. Download en installeer de Arduino IDE op je computer.
2. Download de benodigde bibliotheken voor de Bluetooth-module (indien nodig).
3. Schrijf of download de Arduino-code voor de auto, die de Bluetooth-communicatie, motorbesturing, LED-bediening en buzzer-bediening omvat.
4. Upload de code naar de Arduino Uno.

## Gebruik

1. Zet de auto aan en zorg ervoor dat de Bluetooth-module correct is gepaard met je smartphone.
2. Open de mobiele app die je hebt gebruikt om verbinding te maken met de Bluetooth-module.
3. Verzend de juiste commando's via de app om de auto te laten bewegen.
4. De LED's en buzzer kunnen worden bediend via extra commando's die je hebt geprogrammeerd.

## Opmerkingen

- Zorg ervoor dat je de juiste polariteit respecteert bij het aansluiten van de componenten om schade aan de apparatuur te voorkomen.
- Controleer altijd of de batterijen voldoende zijn opgeladen voordat je de auto gebruikt om te voorkomen dat deze plotseling stopt tijdens het gebruik.
- Pas de code aan naar eigen wens om extra functionaliteit toe te voegen of om het gedrag van de auto aan te passen.

Met deze instructies zou je in staat moeten zijn om je eigen Arduino Bluetooth-auto met LED's en een buzzer te bouwen en er plezier mee te hebben! Veel succes!

