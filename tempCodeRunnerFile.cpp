void binarySearch()
{
    char ulang;
    do

    {

    cout << "\n======================\n";
    cout << "             Pencarian Binary Search \n";
    cout << "============================\n";
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;

    int low = 0;
    int high = nPanjang - 1;

    do
    {

    int mid = (low + high) / 2; 
    if (element [mid]== x)
    {
        cout << "\n [j] Elemen " << x << " ditemukan pada indeks" << mid << ".\n";
        return;

    }
    if (x < element [mid])
    {
    high = mid - 1;
    }
    
    if (x > element [mid])
    {
        low = mid + 1;
    }

    } while (low <= high);
    if (low > high)
    {
    cout <<"\n[x] Elemen"   << x << "tidak ditemukan dalan array.\n";
    }
    cout << "\nIngin mencari lagi? (y/n): ";
    cin >> ulang;

    } while (ulang =='y' || ulang =='Y');
}
 int main()
 {
    input();
    bubbleSertArray();
    display(); 
    binarySearch();
 }