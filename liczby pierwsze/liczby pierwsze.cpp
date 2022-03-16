int iloscLiczb = 0;
int iloscLiczbPierwszych = 0; int liczbaNaturalna = 2;
int dzielnik = 2;
cout << "Ile liczb Pierwszych Chcesz Wyświetlić?: ";
cin >> iloscLiczb;
cout << endl << "Liczby Pierwsze: ";
while (iloscLiczbPierwszych < iloscLiczb)
{
	while (dzielnik < liczbaNaturalna)
	{
		if (liczbaNaturalna % dzielnik == 0)
		{
			dzielnik = 2;
			liczbaNaturalna++;
			break;
		}
		dzielnik++;
	}
	if (dzielnik >= liczbaNaturalna) {
		cout << liczbaNaturalna << ","; dzielnik = 2;
		liczbaNaturalna++; iloscLiczbPierwszych++;
	}
}