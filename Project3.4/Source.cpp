// Lab_03_4.cpp
// < chycherska iryna >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 29
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (((y >= (x - 1) * (x - 1) && y >= x) ||
		(y <= (R * R - x * x) * (R * R - x * x) && y >= -x && y <= 0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
		cin.get();
		return 0;
}
