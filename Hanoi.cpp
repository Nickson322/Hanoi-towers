// 
//
// Hanoi.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
// ��������� �����
#include <iostream>
 
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity;
	cout << "����� ������� ��������:" << endl;
	cin  >> start_peg;
	cout << "����� ��������� ��������:" << endl;
	cin  >> destination_peg;
	cout << "����� �������������� ��������:" << endl;
	cin  >> buffer_peg;
	cout << "���������� ������:" << endl;
	cin  >> plate_quantity;

	return 0;
}