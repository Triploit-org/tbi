TBI - Triploit Binary Interpreter
=================================

Was ist dieser Interpreter?
---------------------------

Er ist ein aus Lust und Laune entstandener Interpreter, geschrieben in C++. Er kann 8-Stellige binärbefehle auf seine ganz eigene weise Interpretieren.

Variablen
---------

Variablen werden mit verschiednen Speicherzellen umgesetzt, davon gibt es 5:

     RA, in binär dann: 01011001
     SB, in binär dann: 01011000
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
[ SOON ]

**SY und OUT**
[ SOON ]


**NREG**
NREG ist dazu da, um Nachrichten (wenn Register einenneuen Wert erhalten) zu unterdrücken. Schreibt man diesen Binär-Befehl (in binär) am Anfang einer Datei, so wird er alle Ausgaben Blocken. Dies ist im Programmverlauf nicht mehr aufzuheben.

**DEBG**
DEBG verhindert das die eingegebenen Binärzahl, die in eine Dezimalzahl umgerechnet wurde, ausgegeben wird. Am Anfang einer Datei kann dies doch manchmal sehr nützlich, sowie auch schädlich (Fehlerbehebung) sein. Dies ist im Programmverlauf nicht mehr aufzuheben.

Weitere Befehle werden bals hinzugefügt! Dazu gehören dann:
> Input, 
> Register in Register verschieben, 
> weiteres...

#####**MfG Survari, Organisationsleiter**
