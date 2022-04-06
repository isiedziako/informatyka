using namespace std;
#include<iostream>


int main()
{

	int a, b, c, NWW;//Tworzenie zmiennych: a-zmienna na I liczbę, b- II liczbę, c-Iloczyn a i b w celu niepowtarzania niepotrzebnie wyliczania NWD(poniewaz operujemy na czysto na a i b),do wyliczenia NWW i zmienna NWW-przechowujaca NWW



	cout << "Podaj Pierwszą Liczbę: ";

	cin >> a;//Podawanie 1 iczby



	cout << "Podaj Drugą Liczbę: ";

	cin >> b;//Podawanie 2 iczby



	c = a * b;//Iloczny a i b



	while (a != b)//Pętla ta,będzie się powtarzać doputy,doputy a i b nie bedą sobie równe.To pozwala,w pętli na zmiejszanie liczby a i b, żeby po przez ich różnicę,znaleśc NWD

	{

		if (a < b)//Jeżeli a jest mniejsze od b

		{

			b = b - a;//To od b odejmójemy od a

		}

		else if(b < a)//a jezeli b jest mniejsze od a

		{

			a = a - b;//To od a odejmójemy b

		}

		//Jest to po to,by zmiejszać liczby a i b tak,żeby je ze sobą porównać

	}



	NWW = c / a;//Dzielenie iloczynu a i b,przez NWD(mogłoby być też b,bo a i b,to to samo,czyli oba są NWD)



	cout << "Największy Wspólny Dzielnik: " << a << endl;//Wyswieltanie NWD

	cout << "Największa Wspólna Wielokrotność: " << NWW;//Wyświeltanie NWW

}