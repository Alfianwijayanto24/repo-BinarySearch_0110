#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{

while (true)
{

   cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
   cin >> nPanjang;
    if (nPanjang <= 10)
    {

        break;
    }
    else
    {
        cout<<"\n[!] Jumlan elemen tidak boleh lebih dari 10. 51lakan coba lagi.\n";

    }
}