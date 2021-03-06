# Praxisorientierte Einführung in die Computergraphik

Mit der verwendung von OpenGL.
___

## Szene Elemente

### Hubschrauber

#### 3D-Model

> von Thoralf Teumer

* Heck und Hauptrotoren
* Kufen
  * Kufe
* Rumpf
  * Nase & Wände
* Heck
* Cockpitscheibe (Transparent)

#### Spotlight

> von Robin Seerig und Thoralf Teumer

#### Steuerung

> von Robin Seerig, weitergeführt und animiert von Thoralf Teumer

    SHIFT: nach oben
    STRG: nach unten
    Pfeil-LINKS: drehung links
    Pfeil-RECHTS: drehung rechts
    Pfeil-Oben: neigung nach vorne (vorwärts fliegen)
    Pfeil-Unten: neigung nach hinten (rückwärts fliegen)

Die Neigung ist erst ab einer gewissen Höhe verfügbar!
Sinkt man, setzt kurz über dem Boden eine Landeanimation ein.

![Hubschrauber](https://i.imgur.com/unv1pUk.png)

### Laterne

> von Robin Seerig

#### 3D-Model

* Mast
* Lampe
  * ausgehende Lichtquelle
* Deckel
  * Kuppe und Schirm
* Anker
* Glasscheibe (Transparent)

![Laterne](https://i.imgur.com/BHEJZBg.png)

### Flugzeug

> von Robin Seerig

Das Flugzeug ist innerhalb des Programmes Blender entstanden,
hier habe ich Beispiele aus dem Internet rausgesucht und dann
Formen dazu erstellt.

![Flugzeug](https://i.imgur.com/XgPUO1v.png)

### Windrad

> von Thoralf Teumer

Ein rotes Punktlicht auf dem mit Blender erstellten Windrad warnt vor Kollisionen.

> von Robin Seerig

Blinken des Lichts

![Windrad](https://i.imgur.com/vtgt7rm.png)

### Landschaft

> von Thoralf Teumer

Die Landschaft wurde ebenfalls mit Blender gestaltet.

![Landschaft](https://i.imgur.com/Fa0jS34.png)

#### Helipad Landefunktion

> von Robin Seerig

![Helipad](https://i.imgur.com/49YvShW.png)

### Direktionales Licht

> von Robin Seerig

Eine Implementierte Funktion für die Berechnung des RGB-Wertes
anhand einer Temperatur. Mit den Ziel einen Tagesrhytmus zu simulieren.

Die Temperatur der Szene steigt stätig.

### Kameraeinstellungen

Ein wechsel zwischen den Kameraperspektiven ist über die Tasten 1 bis 3 Möglich.

#### Standartperspektive (Taste `1`)

Die Standartperspektive aus Übung 12.

#### 3th Person (Taste `2`)

> von Thoralf Teumer

Die Verfolgeransicht. Die Kamera folgt dem Hubschrauber mit einstellbarem
Abstand. (Mit geringstem Abstand am schönsten)

#### 1st Person (Taste `3`)

> von Robin Seerig

Cockpit perspektive aus dem Hubschrauber herraus.
