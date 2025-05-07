#include <iostream>
using namespace std;

int element[10];
int nPanjnag;
int x;
void input()
{
    while (true)
    {
        cout << "Masukan banyaknya elemen array (maksimal 10): ";
        cin >> nPanjnag;
        if (nPanjnag <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }

    }
    cout << "\n======================\n";
    cout << "     Masukan Elemen Array       \n";
    cout << "==============================\n";
    for (int i = 0; i < nPanjnag; i++)
    {
        cout << "Data ke-"<< (i + 1)<< "=";
        cin >> element[i];
    }
}
void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j =0; j <= nPanjnag - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    }while (pass <= nPanjnag - 1);
}

void display()
{
    cout << "\n========================\n";
    cout << "    Elemen Array Setelah Diurutkan (Asc)  \n";
    cout << "==========================\n";
    for (int j = 0; j < nPanjnag; j++)
    {
        cout << " --> ";
    }
}
    cout << endl;
{
 void binarySearch()
}
    char ulang;
    do
    {
        cout << "\n================================\n";
        cout <<"               Pencarian Binary Search \n";
        cout << "=================================\n";
        cout << "Masukan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjnag - 1;

        do
        {
            int mid = (low + high) / 2;
            if (element[mid] == x)
            {
                cout << "\n[b] Elemen" << x << "ditemukan pada indeks" << mid << ".\n";
                return;
            
            }
            if (x < element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high)
        if (low <== high)
        {
            cout << "\n[s] Elemen" << x << "tidak ditemukan dalam array.\n";
         }
         cout << "\nIngin mencuri lagi? (y/n):";
         cin >> ulang;
          

    } while (ulang == 'y' || ulang == 'y');
    {
        int main()
        {
            input();
            bubbleSortArray();
            display();
            binarySearch();
        }
    }