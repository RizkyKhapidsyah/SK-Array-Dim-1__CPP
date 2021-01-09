/* ---------------------------------- */
/* Inisialisasi Array Dimensi 1 */
/* ---------------------------------- */

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	char hari[7][10] = { "Minggu","Senin","Selasa","Rabu","Kamis","jum'at","Sabtu" };
	
	cout << "Nama-nama hari:" << endl;
	cout << hari[0] << endl << hari[1] << endl << hari[2] << endl << hari[3] << endl << hari[4] << endl;
	
	_getch();
	return 0;
}