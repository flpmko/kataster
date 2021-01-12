<div align="center">
	<a href="https://www.uniza.sk/index.php/en/" target="_blank">
		<img src="https://img.shields.io/badge/university-University%20of%20Žilina-2B3A65.svg" alt="university">
	</a>
	<a href="https://www.fri.uniza.sk/en/" target="_blank">
		<img src="https://img.shields.io/badge/faculty-Faculty%20of%20Management%20Science%20and%20Informatics-FECE50.svg" alt="faculty">
	</a>
  <a href="https://vzdelavanie.uniza.sk/vzdelavanie/plany.php" target="_blank">
		<img src="https://img.shields.io/badge/program-Informatics-00a9e0.svg" alt="faculty">
	</a>
</div>

<h2 align="center">
	University of Žilina<br>Faculty of Management Science and Informatics
</h2>

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
