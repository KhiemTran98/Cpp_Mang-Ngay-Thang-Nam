#include<iostream>
#include"CMangDate.h"
using namespace std;
CMangDate::~CMangDate()
{
	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}
void CMangDate::Nhap()
{
	cout << "Nhap so NTN: ";
	cin >> n;
	a = new CDate*[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap NTN thu " << i + 1 << endl;
		a[i] = new CDate();
		a[i]->Nhap();
	}
}
int CMangDate::DemThang(int m)
{
	int d = 0;
	for (int i = 0; i < n; i++)
		if (a[i]->GetThang() == m)
			d++;
	return d;
}