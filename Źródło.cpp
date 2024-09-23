#include <iostream>
#include <string>


using namespace std;

int main () {
	int length = 0, liczbaint = 0;
	string liczba, wynik;
	cout << "WprowadŸ liczbê dziesiêtn¹: ";
	cin >> liczba;
	cout << endl;
	length = liczba.length();
	liczbaint = stoi(liczba);
	while (liczbaint != 0) {
		if (liczbaint % 2 == 0) {
			liczbaint = liczbaint / 2;
			wynik += string(1, '0');
		}
		else if (liczbaint % 2 == 1) {
			liczbaint--;
			liczbaint = liczbaint / 2;
			wynik += string(1, '1');
		}
	}
	for (int i = 0; i < wynik.length() / 2; i++) {
		swap(wynik[i], wynik[wynik.length() - i - 1]);
	}
	cout << "Liczba binarna(dwójkowa): " << wynik << endl;


	return 0;
}