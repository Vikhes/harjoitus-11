/**************************
*Ohjelman nimi:Harjoitus 11
*Tekij�:Ville Hakola
*lyhyt kuvaus
*Muuta teht�v�n 9 laskin-ohjelmaa niin, etta valikko nayttaa
*seuraavalta:
*VALIKKO
*0. Lopetus
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*6. Syota uudet luvut laskemista varten
*Laskimella on siis mahdollista k�sitell�
*useita lukupareja k�ytt�j�n toiveiden
*mukaisesti. Mita tapahtuu, jos luku2 on 0?
*HUOM! goto -lauseen k�ytt� on KIELLETTY!!!!
*Versio:1.0
*PVM:11.10.2014
******************************/


#include <iostream>
using namespace std;
int main()
{
	cout << "Laskin" << endl;
	int Luku1;
	int Luku2;
	int Valikko=1;
	cout << "Anna ensimm�inen luku" << endl;
	cin >> Luku1;
	cout << "Anna toinen luku" << endl;
	cin >> Luku2;
	while (true)
		{ 
			
			cout << "VALIKKO" << endl;
			cout << "0. Lopetus" << endl;
			cout << "1. Summa" << endl;
			cout << "2. Erotus" << endl;
			cout << "3. Tulo" << endl;
			cout << "4. Osam��r�" << endl;
			cout << "5. Jakoj��nn�s" << endl;
			cout << "6. Sy�t� uudet luvut laskemista varten" << endl;
			cout << "Valitkaa laskutoimitus: ";
			cin >> Valikko;
			if (Valikko == 1)
			{
				cout << "Lukujen summa on ";
				cout << (Luku1 + Luku2) << endl;
				cin >> Valikko;
			}
			if (Valikko == 2)
			{
				cout << "Lukujen erotus on ";
				cout << (Luku1 - Luku2) << endl;
				cin >> Valikko;
			}
			if (Valikko == 3)
			{
				cout << "Lukujen tulo on ";
				cout << (Luku1*Luku2) << endl;
				cin >> Valikko;
			}
			if (Valikko == 4)
			{
				cout << "Lukujen osam��r� on ";
				cout << (float)(Luku1 / Luku2) << endl;
				cin >> Valikko;
			}
			if (Valikko == 5)
			{
				cout << "Lukujen jakoj��nn�s on ";
				cout << (Luku1%Luku2) << endl;
				cin >> Valikko;
			}
			if (Valikko == 0)
			{
				break;
			}
			if (Valikko == 6)
				cout << "Anna uudet luvut" << endl;
				cin >> Luku1 >> Luku2;
		}


	
}