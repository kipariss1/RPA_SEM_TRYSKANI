# Develop FLUID SIM branch semestralniho projektu z predmetu RPA (ČVUT FS API)

JAK OTEVRIT:

Uloha opiskovani. Tato verze ridiciho programu je otestovana a prijata. Program je vyvinut v prostredi OpenPLC. Pro otevreni stahni OpenPLC editor -> stahni 
tuto branch -> Vyexportuj archiv do nejake slozky -> Otevri slozku pomoci OpenPLC editor -> SuperStavy je tvuj ridici program. Program funguje jako stavovy automat 
(viz. google state machine), krome pracovni sekvenci. Ta je bitove kodovana do promenne typu WORD. Celkem ST_AUTOMATIC_MODE je o tom bitovem dekodovani. 


O ST_AUTOMATIC_MODE:

  Je matice OUTPUT_MATX, ktera zahrnuje to jak by meli byt vystupy PLC v kazdem kroku jednotlive sekvence (kazdy radek - kazdy krok). A TRANS_MATX, ktera obsahuje to 
jak by mely vypadat vstupy aby se sekvence presla na dalsi krok. V ST_AUTOMATIC_MODE ve for cyklu probiha porovnavani vstupu PLC s jednotlyvymi radky TRANS_MATX a 
zapisovani vystupu podle OUTPT_MATX. 


O tom, co nefunguje :D :

Nefunhuje "STOP", ani "EMERGENCY STOP", ale je to opraveny v "develop-HMI" branch. Neni implementovany manual mode taky.
