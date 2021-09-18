#include "compara.h"

void printTrei(int *numere, int dimensiune)
{
	if (dimensiune >= 3) {
		std::sort(numere, numere + dimensiune);
		std::cout << numere[0] << " " << numere[1] << " " << numere[2] << std::endl;
		//pentru cele mai mari 3 numere
		std::cout << numere[dimensiune - 1] << " " << numere[dimensiune - 2] << " " << numere[dimensiune - 3] << std::endl;
	}
	else
		std::cout << "Prea putine elemente\n";
}
