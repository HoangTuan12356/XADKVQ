#include<iostream>
using namespace std;
#define Max 100
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu: " << i<< ":";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		cout << a[i]<< endl;
	}
}
int main()
{
	int n, a[Max];
	cout << "Nhap vao so phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);
	system("pause");
	return 0;
}
