#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

fstream fr;
void DocFile(int a[10][10],int n)
{
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j<n; j++)
		fr >> a[i][j];
	} 
	fr.close();
}
///Xuat do thi
void XuatDoThi(int a[10][10],int n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
			cout << a[i][j] << " ";
			cout<<endl;
	}
}
/// tao moi do thi
void TaoMoi(int a[10][10], int &n)
{
	cout << "Nhap n"; 
	cin >> n;
	fr.open("text4.txt",ios :: out);
			fr << n;
		fr >>n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout<< "Trong so" << i << "den" << j;
				cin >> a[i][j];
				fr << a[i][j] << "_";
			}
		}
		fr<<endl;
		fr.close();
}
int main()
{
	int n;
	int a[10][10];
	fr.open("text4.txt", ios::in);
	fr>>n;
	DocFile(a,n);
	XuatDoThi(a,n);
}
