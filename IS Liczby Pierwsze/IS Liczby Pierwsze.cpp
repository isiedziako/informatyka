#include <iostream>



using namespace std;



int main()
{
	int iloscLiczb = 0;//Wokreśła ilość liczb pierwszych do wyświetlenia
	int iloscLiczbPierwszych = 0;//W tej zmiennje,są zawarta ilość znalezionych liczb pierwszych
	int liczbaNaturalna = 2;//Okreśła liczbę naturalną,od któej zaczyna się sprawdzanie,czy jest liczba Pierwszą
	int dzielnik = 2;//Określa liczbe,przez którą dzielimy liczbę Naturalną w celu sprtawdzenia,czy jest liczba Pierwszą



	cout << "Ile liczb Pierwszych Chcesz Wyświetlić?: ";
	cin >> iloscLiczb;
	cout << endl << "Liczby Pierwsze: ";




	//Pętla Nadrzędna
	while (iloscLiczbPierwszych < iloscLiczb)//Jest to pętla,która będzie się zapętlać doputy dopuki ilośc znalezionych liczb pierwszych będzie mniejsza,od Ilości liczb,jakie użytkownik chce zobaczyć
	{



		while (dzielnik < liczbaNaturalna)//Tutaj jest pętla która powtarza się doputy dopuki dzielnik jest mniejszy od aktualnej liczby Naturalnej
		{
			if (liczbaNaturalna % dzielnik == 0)//Jeżeli reszta z dzielenia aktualnej liczby naturalnej przez aktualny dzielnik jest = 0,to znaczy że liczba w zmiennej Liczba Naturalna,nie jest liczbą Pierwszą
			{
				dzielnik = 2;//Wracamy do domyślenj wartości,ponieważ,bedizemy na nowo sprawdzać,czy większa liczba naturalna jest liczbą Pierwszą
				liczbaNaturalna++;//Zwiększamy liczbę Naturalną o 1,czyli jeżeli zaczynaliśmy od 2,i algorytm zaliczył ją jako liczba naturalna,to będzie teraz sprawdzął liczbę 3 itd
				break;//Wychodzenie z Pętli,żeby ominąć zwiększenie dzielnika o 1.ostatecznie i tak wraca na początek tej pętli,przez to,że pętla nadżędna,się nieskończyła
			}
			dzielnik++;//Zwiększanie się dzilenika o 1,po to,byu sprawdzić aktualna LiczbęNaturalną,określona w zmiernnej liczbaNaturalna
		}
		if (dzielnik >= liczbaNaturalna)//Jeżeli dzielnik jest większy lub równy(mogłoby być równe,ale to jest takie...zabezpeiczenie,zeby na 10% się ten if wykonał),oznacza to,że liczba w zmiennej LiczbaNaturalna jest liczbą Pierwszą.Ten if wykona się po tym,jak dzielnik nie bedzie mniejszy od Liczby Naturalnej określonej w zmiennej liczbanaturalna
		{
			cout << liczbaNaturalna << ",";//Wyświetlenie liczby Pierwszej,nie dałem do osobnje zmiennej ze wzgledu by oszczędzić te bajty.
			dzielnik = 2;//Wracamy do domyślenj wartości,ponieważ,bedizemy na nowo sprawdzać,czy większa liczba naturalna jest liczbą Pierwszą
			liczbaNaturalna++;//Zwiększamy liczbę Naturalną o 1,czyli jeżeli zaczynaliśmy od 2,i algorytm zaliczył ją jako liczba naturalna,to będzie teraz sprawdzął liczbę 3 itd
			iloscLiczbPierwszych++;//Określa ilość znalezionych Liczb Pierwszych.
			//Wszelkei tutejsze zabiegi,czyli wyswietlanie liczby pierwszej,w zmiennej któa okreśła aktuaqlne liczby naturalne są po to,by zmiejszyć Wielkość Programu.Po rpostu go zoptamylizować.
		}
	}
}