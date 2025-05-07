void display()
{
    cout << "\n==============================\n";
    cout << "     Elemen Array Setelah Diurutkan (Asc)  \n";
    cout << "==================================\n";
    for (int j = 0; j < nPanjang; j++)
    {

    cout << element[j];
    if (j < nPanjang - 1)
    {
        cout << "-->";
    }
    }
    cout << endl;
}
