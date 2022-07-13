// 
//
// Hanoi.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
// Ханойские башни
#include <iostream>
 
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity;
	cout << "Номер первого столбика:" << endl;
	cin  >> start_peg;
	cout << "Номер конечного столбика:" << endl;
	cin  >> destination_peg;
	cout << "Номер промежуточного столбика:" << endl;
	cin  >> buffer_peg;
	cout << "Количество дисков:" << endl;
	cin  >> plate_quantity;

	return 0;
}