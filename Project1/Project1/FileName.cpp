#include <iostream>
#include "math.h"



int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	int c;
	
	std::cout << "������� ������ ����� : ";
	std::cin >> a;

	std::cout << "������� ������ ����� : ";
	std::cin >> b;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������):";
	std::cin >> c;
	switch (c) {
		case 1:std::cout<<sum(a, b); break;
		case 2:std::cout << sub(a, b); break;
		case 3:std::cout << mult(a, b); break;
		case 4:std::cout << div(a, b); break;
		case 5:std::cout << power(a, b); break;
		default:break;
	}
	

	return 0;
}