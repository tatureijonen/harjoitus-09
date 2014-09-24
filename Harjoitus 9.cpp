/*
TATU REIJONEN - IIO14S2

Harjoitus 9 (Palautus vko 41)
Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
*/

#include <iostream>
#include <cmath>
using namespace std;
void main()

{
	int luku1, luku2;
	int vastaus;
	
	while (true){

		cout << "Anna ensimmäinen kokonaisluku: ";
		cin >> luku1;
		cout << "Anna toinen kokonaisluku: ";
		cin >> luku2;
		cout << "VALIKKO \n1. Summa \n2. Erotus \n3. Tulo \n4. Osamaara \n5. Jakojaannos";
		cout << "\nANNA VALINTASI\n";

		cin >> vastaus;
		if (vastaus == 1)
			cout << "VASTAUS ON: " << luku1 + luku2;

		if (vastaus == 2)
			cout << "VASTAUS ON: " << luku1 - luku2;

		if (vastaus == 3)
			cout << "VASTAUS ON: " << luku1 * luku2;

		if (vastaus == 4)
			cout << "VASTAUS ON: " << (float)luku1 / luku2;

		if (vastaus == 5)
			cout << "VASTAUS ON: " << luku1 % luku2;

		cout << "\n\n";
	}
}