#include<iostream>
#include<conio.h>
#include"CMangDate.h"
using namespace std;
void main()
{
	CMangDate* x = new CMangDate();
	int m;
	cout << "Nhap mang NTN" << endl;
	x->Nhap();
	cout << "\nNhap thang can tim: ";
	cin >> m;
	cout << "\nSo phan tu co thang " << m << ": " << x->DemThang(m);
	delete x;
	_getch();
}