#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h> 
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include <limits>


using namespace std;
void obsluga_logow(fstream &plik, string data)
{
	plik.open("C:/CryptoLogi/crypto_log.txt", ios_base::app);
	if (!(plik.is_open())) {
		system("md C:\\CryptoLogi");
		plik.open("C:/CryptoLogi/crypto_log.txt", ios_base::app);
		plik << data + "  bledne haslo";
		plik << endl;
		plik.close();
	}
	else {
		plik << data + "  bledne haslo";
		plik << endl;
		plik.close();
	}
}
string obsluga_drugiego_hasla(SYSTEMTIME dzien)
{
	switch (dzien.wDayOfWeek)
	{
	case 1: return "poniedzialek"; break;
	case 2:	return "wtorek"; break;
	case 3: return "sroda"; break;
	case 4:	return "czwartek"; break;
	case 5:	return "piatek"; break;
	case 6:	return "sobota"; break;
	case 7:	return "niedziela"; break;

	}
}
int obsluga_szyfrowania(char litera)
{
	switch (litera)
	{
	case 'a':return ((rand()%22)+ 100); break;
	case 'b':return ((rand()%22)+ 122); break;
	case 'c':return ((rand()%22)+ 144); break;
	case 'd':return ((rand()%22)+ 166); break;
	case 'e':return ((rand()%22)+ 188); break;
	case 'f':return ((rand()%22)+ 210); break;
	case 'g':return ((rand()%22)+ 232); break;
	case 'h':return ((rand()%22)+ 254); break;
	case 'i':return ((rand()%22)+ 276); break;
	case 'j':return ((rand()%22)+ 298); break;
	case 'k':return ((rand()%22)+ 320); break;
	case 'l':return ((rand()%22)+ 342); break;
	case 'm':return ((rand()%22)+ 364); break;
	case 'n':return ((rand()%22)+ 386); break;
	case 'o':return ((rand()%22)+ 408); break;
	case 'u':return ((rand()%22)+ 430); break;
	case 'p':return ((rand()%22)+ 452); break;
	case 'r':return ((rand()%22)+ 474); break;
	case 's':return ((rand()%22)+ 496); break;
	case 't':return ((rand()%22)+ 518); break;
	case 'w':return ((rand()%22)+ 540); break;
	case 'x':return ((rand()%22)+ 562); break;
	case 'y':return ((rand()%22)+ 584); break;
	case 'z':return ((rand()%22)+ 606); break;
	case '1':return ((rand()%22)+ 628); break;
	case '2':return ((rand()%22)+ 650); break;
	case '3':return ((rand()%22)+ 672); break;
	case '4':return ((rand()%22)+ 694); break;
	case '5':return ((rand()%22)+ 716); break;
	case '6':return ((rand()%22)+ 738); break;
	case '7':return ((rand()%22)+ 760); break;
	case '8':return ((rand()%22)+ 782); break;
	case '9':return ((rand()%22)+ 804); break;
	case '0':return ((rand()%22)+ 826); break;
	case '.':return ((rand()%22)+ 848); break;
	case '?':return ((rand()%22)+ 870); break;
	case ' ':return ((rand()%22)+ 892); break;
	}
}
void szyfrowanie(string wiadomosc) {

	fstream plik_zaszyfrowany;
	plik_zaszyfrowany.open("x.txt",ios_base::app);
	for (int i = 0; i < wiadomosc.length(); i++)
	{
		plik_zaszyfrowany<<obsluga_szyfrowania(wiadomosc[i]);
	}
	plik_zaszyfrowany << endl;

}


string obsluga_deszyfrowania(string a) {
	int b = atoi(a.c_str());
	             if ((b >= 100) && (b < 122)) return"a";
			else if ((b >= 122) && (b < 144)) return"b";
			else if ((b >= 144) && (b < 166)) return"c";
			else if ((b >= 166) && (b < 188)) return"d";
			else if ((b >= 188) && (b < 210)) return"e";
			else if ((b >= 210) && (b < 232)) return"f";
			else if ((b >= 232) && (b < 254)) return"g";
			else if ((b >= 254) && (b < 276)) return"h";
			else if ((b >= 276) && (b < 298)) return"i";
			else if ((b >= 298) && (b < 320)) return"j";
			else if ((b >= 320) && (b < 342)) return"k";
			else if ((b >= 342) && (b < 364)) return"l";
			else if ((b >= 364) && (b < 386)) return"m";
			else if ((b >= 386) && (b < 408)) return"n";
			else if ((b >= 408) && (b < 430)) return"o";
			else if ((b >= 430) && (b < 452)) return"u";
			else if ((b >= 452) && (b < 474)) return"p";
			else if ((b >= 474) && (b < 496)) return"r";
			else if ((b >= 496) && (b < 518)) return"s";
			else if ((b >= 518) && (b < 540)) return"t";
			else if ((b >= 540) && (b < 562)) return"w";
			else if ((b >= 562) && (b < 584)) return"x";
			else if ((b >= 584) && (b < 606)) return"y";
			else if ((b >= 606) && (b < 628)) return"z";
			else if ((b >= 628) && (b < 650)) return"1";
			else if ((b >= 650) && (b < 672)) return"2";
			else if ((b >= 672) && (b < 694)) return"3";
			else if ((b >= 694) && (b < 716)) return"4";
			else if ((b >= 716) && (b < 738)) return"5";
			else if ((b >= 738) && (b < 760)) return"6";
			else if ((b >= 760) && (b < 782)) return"7";
			else if ((b >= 782) && (b < 804)) return"8";
			else if ((b >= 804) && (b < 826)) return"9";
			else if ((b >= 826) && (b < 848)) return"0";
			else if ((b >= 848) && (b < 870)) return".";
			else if ((b >= 870) && (b < 892)) return"?";
			else if ((b >= 892) && (b < 914)) return" ";

}
void deszyfrowanie(string sciezka) {
	string wiadomosc_odszyfrowana, a, b;
	fstream plik_zaszyfrowany;
	plik_zaszyfrowany.open(sciezka, ios_base::in);
	if (plik_zaszyfrowany.is_open()) {
		getline(plik_zaszyfrowany, a);
		for (int i = 0; i < a.length(); i+=3)
		{
			b = a[i];
			b += a[i + 1];
			b += a[i + 2];
			wiadomosc_odszyfrowana += obsluga_deszyfrowania(b);
			
		}
		plik_zaszyfrowany.close();
		
		cout << "Odszyfrowana wiadomosc: " + wiadomosc_odszyfrowana <<endl;
	
	}
	else {
		cout << "Blad sciezki pliku";
	}

}
int main()
{
	srand(time(NULL));
	string haslo1, haslo2, data;
	int wybor;
	SYSTEMTIME cs;
	GetSystemTime(&cs);
	
	data = to_string(cs.wYear) + "-" + to_string(cs.wMonth) + "-" + to_string(cs.wDay) + "  " + to_string(cs.wHour + 2) + ":" + to_string(cs.wMinute) + ":" + to_string(cs.wSecond);
	fstream plik;
	
	
	cout << "Witam Cie przyjacielu, podaj haslo, aby rozpoczac szyfrowanie wiadomosci: ";
	cin >> haslo1;
	cout << endl << "Podaj szyfr: ";
	cin >> haslo2;

	if ((haslo1 == "wesolyborowik69")&&(haslo2 == obsluga_drugiego_hasla(cs))){
		cout << "1. Szyfruj wiadomosc" << endl;
		cout << "2. Dekoduj wiadomosc" << endl;
		cout << "Twoj wybor: ";
		cin >> wybor;
		system("cls");
		switch (wybor) {

			case 1: {
				string wiadomosc;
				cout << "Tresc twojej wiadomosci:";
				cin.ignore();
				getline (cin, wiadomosc);
				szyfrowanie(wiadomosc);
				break;
			}
			case 2: {
				string sciezka;
				cout << "Podaj nazwe pliku (plik musi znajdowac sie w tym samym folderze): ";
				cin >> sciezka;
				deszyfrowanie(sciezka+".txt");
				break;
			}


		}


	}
	else obsluga_logow(plik, data);









	system("pause");
	return 0;
}
