#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
    char panjang[50];
    int a,b,c;
    cout<<"Masukkan Tulisan: ";
    cin>>panjang;
    cout<<endl;
    a=strlen(panjang);
    a--;
    cout<<"Hasil:"<<endl <<endl;
    for(b=a;b>=0;b--)
    {
    	for(c=0;c<=a;c++)
       	{cout<<panjang[c];}
       	cout << endl;
       	a--;
    }
    
    return 0;
}
