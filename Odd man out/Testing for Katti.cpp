#include "pch.h"
#include <iostream>
#include <map>

using namespace std;

int main() {
	int N;
	cout << "Cases: ";
	cin >> N;

	for (int i = 0; i < N; ++i) {
		//1 = key = first
		//2 = value = second
	map<long, int> map;

		int numberOfGuests;
		cout << "Number of guests: ";
		cin >> numberOfGuests;
		for (int a = 0; a < numberOfGuests; ++a) {
			 
			long guestId;
			cout << "Guest id: ";
			//Tar in guestId och l�gger i map, sedan j�mf�r den med 0 dvs om den inte redan finns s� l�ggs den till, annars tars den bort ifall det kommer in en likadan
			//loopar om igen s� m�nga g�nger som vi angett antal g�ster
			//sedan printar ut den f�rsta "keyn" som kom ensam
			cin >> guestId;
			if (map[guestId] == 0) {
				++map[guestId];
			}
			else {
				map.erase(guestId);
			}
		}
		//return iterator to begininning
		cout << "Case #" << (i + 1) << ": " << map.begin()->first << "\n\n";
	}
	return 0;
}