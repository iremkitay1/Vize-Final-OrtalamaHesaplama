#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int vizeNotu, finalNotu, ortalama;
	cout << "Vize notunu giriniz : ";
	cin >> vizeNotu;
	cout << "Final notunu giriniz : ";
	cin >> finalNotu;
	ortalama = vizeNotu * 0.4 + finalNotu * 0.6;
	if (finalNotu > 45)
	{
		cout << "Geçtiniz, ortalamanýz: " << ortalama << endl;
	}
	else
	{
		cout << "Kaldýnýz, final notunuz 45'ten düþük! " << endl;
	}
	return 0;
}