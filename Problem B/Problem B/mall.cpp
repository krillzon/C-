#include "pch.h"
#include <iostream>

using namespace std;
int inputA, inputB, inputC, inputD;
// A^-1 = 1/(ad-bc) * [d -b; -c a] Där A^-1 är inversen

int main()
{
	//Lägger till cases för verifieringshantering (?)
	for (int i = 0; i < 3; ++i) {
		cin >> inputA >> inputB >> inputC >> inputD;
		int splitter = (inputA * inputD) - (inputB * inputC);

		cout << "Case " << (i + 1) << ":\n";
		cout << (inputD / splitter) << " " << (inputB*-1 / splitter) << "\n" << (inputC*-1 / splitter) << " " << (inputA / splitter) << "\n";
	}
	return 0;
}
