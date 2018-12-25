#include<iostream>
#include<stdlib.h>
using namespace std;
struct DateMonth
{
	int date;
	int month;
	int years;
};
int month[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int KiemTra(int years)
{
	if ((years % 400 == 0) || (years % 4 == 0 && years %100 != 0))
	return 1;
	else
	return 0;
}
int TimSTT(DateMonth n){
		int stt = 0;
		for(int i = 0; i < n.month; i++)
			stt += month[i];
		stt += n.date;
		if(KiemTra == 0 && n.month > 2)
			stt + 1;
		return stt; 
	}
int main()
{
	string st;
	cout << "nhap du lieu: "; getline(cin, st);
	DateMonth X;
	char t[4];
	t[0] = st[0];
	t[1] = st[1];
	X.date = atoi(t);
	t[0] = st[3];
	t[1] = st[4];
	X.month = atoi(t);
	t[0] = st[6];
	t[1] = st[7];
	t[2] = st[8];
	t[3] = st[9];
	X.years = atoi(t);
	cout << "Date: " << X.date << " Month: "<< X.month << " Years: "<< X.years << endl;
}

