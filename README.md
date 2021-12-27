# Develop SCADA branch semestralniho projektu z predmetu SVDV (ČVUT FS API)

JAK OTEVRIT:

Uloha opiskovani. Tato verze ridiciho programu a HMI je otestovana a prijata. Program je vyvinut v prostredi OpenPLC, HMI vyvinuto v mySCADA. Pro otevreni stahni OpenPLC 
editor -> stahni tuto branch -> Vyexportuj archiv do nejake slozky -> Otevri slozku pomoci OpenPLC editor -> SuperStavy je tvuj ridici program. Program funguje jako 
stavovy automat (viz. google state machine), krome pracovni sekvenci. Ta je bitove kodovana do promenne typu WORD. Celkem ST_AUTOMATIC_MODE je o tom bitovem dekodovani. 


O ST_AUTOMATIC_MODE:

  Je matice OUTPUT_MATX, ktera zahrnuje to jak by meli byt vystupy PLC v kazdem kroku jednotlive sekvence (kazdy radek - kazdy krok). A TRANS_MATX, ktera obsahuje to 
jak by mely vypadat vstupy aby se sekvence presla na dalsi krok. V ST_AUTOMATIC_MODE ve for cyklu probiha porovnavani vstupu PLC s jednotlyvymi radky TRANS_MATX a 
zapisovani vystupu podle OUTPT_MATX. 


O tom, co nefunguje :D :

Neimplementovan "STOP", misto toho stavovy automat pada vzdy do "emergency stop" stavu, jak je ukazano v dokumentaci "stavovy_diagram_2_0.pdf". 
Neni implementovany manual mode taky.

O tom jak otevrit project HMI:

Ve slozce HMI_Rass_Mikh_Working_version/ je soubor HMI_RASSUDIKHIN_MIKH.rar. Vyexportuj archiv do slozky -> otevri slozku v myDESIGNER. 
Odkaz na dokumentaci myDESIGNERU taky pomuze: 
https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwitzc-v-4T1AhVzRPEDHSYlA8IQFnoECAQQAQ&url=https%3A%2F%2Fwww.myscada.org%2Fdownloads%2Fmanuals%2FmyPROJECT%2520Designer%2520Manual.pdf&usg=AOvVaw310cIGxYZrLR-T7VT6uC_0
