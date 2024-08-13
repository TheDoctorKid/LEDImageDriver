# LEDImageDriver

1. Initialisieren
   - erstelle eine neue Matrix am Pin "pin" mit:
     LEDMatrix ledMatrix(pin);

2. Signal starten
   - in setup() benutze zum Signalstart:
     ledMatrix.begin();

3. Darstellung eines Bildes
   -  zeige ein Bild an mithilfe von:
      ledMatrix.showImage(bild);
   -  wobei "bild" ein Int-Array mit rgb Werten für jeden Pixel ist

4. Nutze vorgefertigte Bilder
   - ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, UP, DOWN, LEFT, RIGHT, firefox;
     sind alles vordefinierte Konstanten, die in showImage() genutzt werden können

5. Erweitern der Bilder
   - jedes Int-Array ist gültig, solange es das richtige Format hat
   - image_converter.py kann ppm Bilder in das richtige Format umwandeln, sodass die Ausgabe dort in ein neues Array kopiert und benutzt werden kann
