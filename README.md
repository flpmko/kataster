# Kataster
Vytvorte jednoduchý kataster. Aplikácia bude pozostávať z nasledujúcich modulov (tried).
## Nehnutelnost
Trieda bude obsahovať
- **Adresa:** adresa nehnutelnosti ako dynamický textový reťazec, t.j. znakový reťazec 
s variabilnou dĺžkou
- **Cislo:** evidenčné číslo nehnuteľnosti (celé číslo)
- **Rozloha:** rozloha v m2, reálne číslo zaokrúhlené na 2 desatinné miesta

V triede vytvorte konverzný konštruktor, ktorý bude konvertovať reťazec znakov, 
číslo a rozlohu na objekt triedy **Nehnutelnost**.

Trieda bude umožňovať správne vytváranie *"deep copy"* objektov a priraďovanie objektov 
(potrebné implenetovať kopírovací konštruktor a operátor priradenia).

V triede vytvorte metódu, ktorá bude na konzolu vypisovať informácie o nehnuteľnosti
v tvare:
			Adresa: Vysokoškolákov 3

			Cislo: 150

			Rozloha: 100.34 m2

## Register
Trieda implementujúca zoznam nehnuteľností ako dynamické pole objektov triedy **Nehnutelnost**. 
Trieda bude uchovávať informáciu o počte nehnuteľností.

V triede vytvorte metódy:
- **Pridaj:** pridávanie nehnuteľnosti do skladu
- **Vyrad:** odobranie zadanej nehnuteľnosti zo zoznamu
