#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int i, n;
	float angka[100], total;
	
	cout << "Menghitung Nilai Rata-rata"<<endl;
	cout<<endl;
	cout << "Masukkan banyaknya angka: ";cin>>n;
	
	for (i=0; i<n; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];
		total = total+angka[i];
	}
	cout << "Hasil rata-rata adalah = " << total/n << endl;
	return 0;
}
