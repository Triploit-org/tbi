TBI - Triploit Binary Interpreter
=================================

Was ist dieser Interpreter?
---------------------------

Er ist ein aus Lust und Laune entstandener Interpreter, geschrieben in C++. Er kann 8-Stellige binärbefehle auf seine ganz eigene weise Interpretieren.

Variablen
---------

Variablen werden mit verschiednen Speicherzellen umgesetzt, davon gibt es 5:

     RA, in binär dann: 11000111
     SB, in binär dann: 11011000
     HK, in binär dann: 10101101
     DF, in binär dann: 10101100
     und
     KL, in binär dann: 10101111

Wenn wir nun in eines dieser Register schreiben wollen, setzen wir dies so um:

    [ZELLE] [WERT] [MOV]

Wenn wir also ein "a" in Zelle RA schreiben wollen, können wir dies so umsetzen:

     (ZELLE)  (WERT)   (MOV)   
    01011001 01001000 00011000

Wie wir mit MOV arbeiten, wird später erklärt.

Befehle
-------

Es ist möglich den Interpreter ohne eine Dateiangabe auszuführen, um Befehle manuell einzugeben. Dann kommen wir in eine shellähnliche Umgebung und können dort unsere Binären Zahlen und Befehl eingeben.

Um alle Eingaben aufzulisten die binäre Zahl `00000001` benötigt. Sie gibt alle eingaben in Dezimalzahlen aus. Denn alle Eingaben, sowie Dateien werden in Dezimalzahlen umgerechnet und erst dann ausgeführt.

MOV und weitere Binärbefehle
----------------------------

####**Wir haben vier verschiedene Befehle**

     MOV, in binär dann: 00011000
     SY, in binär dann: 00010001
     OUT, in binär dann: 10110100
     DEBG, in binär dann: 01010001
     und
     NREG, in binär dann: 01001110

**MOV/MV**

Wie oben schon gezeigt, wird der MOV Befehl zuletzt angegeben. Zuerst kommt die Speicherzelle, dann der Wert und dann MOV, alles in binär natürlich. Wenn wir nun ein kleines "a" in die Zelle RA schreiben wollen, tuen wir dies so:

     (ZELLE)  (WERT)   (MOV)   
    01011001 01001000 00011000
    
Schreiben wir dies (ohne "(ZELLE)  (WERT)   (MOV)" natürlich), wird in Zelle RA ein kleines A geschrieben.
Wie wir dies dann ausgeben, wird im nächsten Schritt gezeigt.

**SY und OUT**

Um nun das "a" aus Register RA zu lesen, müssen wir zuerst ein paar Dinge tun. Am Anfang wird klargestellt, was das System tun soll (in dem Falle OUT/`10110100`). Dann der Wert (es können auch Register angegeben werden) und zum Schluss SY selbst:

     (OUT) (WERT/ZELLE) (SY)
    10110100 01011001 00010001

**NREG**
NREG ist dazu da, um Nachrichten (wenn Register einenneuen Wert erhalten) zu unterdrücken. Schreibt ma diesen Binär-Befehl (in binär) am Anfang einer Datei, so wird er alle Ausgaben Blocken. Dies ist im Programmverlauf nicht mehr aufzuheben.

**DEBG**
DEBG verhindert das die eingegebenen Binärzahl, die in eine Dezimalzahl umgerechnet wurde, ausgegeben wird. Am Anfang einer Datei kann dies doch manchmal sehr nützlich, sowie auch schädlich (Fehlerbehebung) sein. Dies ist im Programmverlauf nicht mehr aufzuheben.

####**Sonnstiges**

**Bitte beachten:** Das Nutzen von **einem** Leerzeichen ist am besten um die Zahlen zu trennen. Zwei Leerzeichen werden vom Interpreter nicht tolleriert! Genausowenig wie Binärzahlen die größer oder kleiner als 8 sind(außer es steht ein @(neue Zeile) davor).

Falls ein "@" im Quellcode stehen sollte, steht dies für eine neue Zeile. Dies wurde zur Einfacheit eingebaut. "@" darf vor einer Zahl oder alleine, aber niemals nach einer Zahl (also nicht "00000000@", sondern "@00000000" oder nur "@") stehen! Sobald aber nach der Zahk ein Leerzeichen steht("00000000 @"), sollte es wieder klappen.
 
Weitere Befehle und Funkrionen (sowie SY) werden bald hinzugefügt! Dazu gehören dann:
> Input, 
> Register in Register verschieben, 
> weiteres...

#####**MfG Survari, Organisationsleiter**
