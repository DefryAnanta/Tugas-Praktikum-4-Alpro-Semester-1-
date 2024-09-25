#include<iostream>
using namespace std;

int main()
{
    cout << "Tugas Praktikum 4 Alpro" << endl << endl;
    cout << "Nama       : Defry Ananta Perangin Angin" << endl;
    cout << "NPM        : 2410631170066" << endl;
    cout << "Kelas/Prodi: 1B/Informatika" << endl << endl;


    cout << "Nomor 1" << endl;
    int batas, jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << " Masukkan batas bilangan: ";
    cin >> batas;

    // Menampilkan bilangan ganjil
    cout << "\n Bilangan Ganjil:\n";
    for (int i=1; i<=batas; i++)
    {
        if (i % 2 != 0)
        {  // Jika bilangan ganjil tidak habis dibagi 2 atau sisa dibagi 2 adalah tidak sama dengan 0
            jumlahGanjil++;
            cout <<"    "<< i << " (Faktor: ";
            for (int j=1; j<=i; j++)
            {
                if (i % j == 0)
                {
                    cout << j;
                    if (j != i)
                    {
                        cout << ", ";
                    }
                }
            }
            cout << ")\n";
        }
    }

    // Menampilkan bilangan genap
    cout << "\n Bilangan Genap:\n";
    for (int i=1; i<=batas; i++)
    {
        if (i % 2 == 0)
        {  // Jika bilangan genap habis dibagi 2 atau sisa jika dibagi 2 adalah 0
            jumlahGenap++;
            cout <<"    "<< i << " (Faktor: ";
            for (int j=1; j<=i; j++)
            {
                if (i % j == 0)
                {
                    cout << j;
                    if (j != i)
                    {
                        cout << ", ";
                    }
                }
            }
            cout << ")\n";
        }
    }

    // Menampilkan bilangan prima
    cout << "\n Bilangan Prima:\n";
    for (int i=2; i<=batas; i++)
    {
        int bilanganPrima = 1;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                bilanganPrima = 0;
                break;
            }
        }
        if (bilanganPrima == 1)
        {
            jumlahPrima++;
            cout <<"    "<< i << " (Faktor: 1, " << i << ")\n";
        }
    }

    // Menampilkan jumlah bilangan ganjil, genap, dan prima
    cout << "\n Jumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << " Jumlah bilangan genap : " << jumlahGenap << endl;
    cout << " Jumlah bilangan prima : " << jumlahPrima << endl << endl;


    cout << "Nomor 2" << endl;
    int n, a = 0, b = 1, c;

    cout << " Masukkan jumlah banyak deret bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "   Deret Fibonacci: ";

    for (int i=1; i<=n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
        }
        else if (i == 2)
        {
            cout << b << " ";
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    } cout << endl << endl;


    cout << "Nomor 3" << endl;
    int tinggi, spasiAwal = 10;

    // Menginput tinggi segitiga
    cout << " Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
    {
        // Menampilkan spasi awal untuk menggeser segitiga ke kanan
        for (int j = 1; j <= spasiAwal; j++)
        {
            cout << " ";
        }
        // Menampilkan spasi di sebelah kiri agar bintang membentuk segitiga sama kaki
        for (int j=1; j<=tinggi-i; j++)
        {
            cout << " ";
        }

        // Menampilkan bintang dan spasi antar bintang
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
            if (k < i)
            {
                cout << " "; // Menambahkan spasi antar bintang
            }
        }
        cout << endl; // Pindah ke baris berikutnya
    }

return 0;
}
