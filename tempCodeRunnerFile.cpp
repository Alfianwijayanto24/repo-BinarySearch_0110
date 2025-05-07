oid bubbleSertArray()
{
    int pass = 1;
    do
    {

     for (int j = 0; j <= nPanjang - 1 - pass; j++)
    {

    if (element[j] > element[j + 1])
        {

        int temp = element [j];
        element [j] = element[j + 1];
        element[j + 1] = temp;
        }
    }
        pass++;
    }while (pass <= nPanjang - 1);
}
