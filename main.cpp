#include <conio.h>
#include "operasiProgram.h"

using namespace std;

void mainmenu();

int main()
{
    mainmenu();
}

void mainmenu()
{
    char pilih;

    do
    {
        cout<<"=====================MainMenu==========================="<<endl;
        cout<<"=  1. Tambah barang                                    ="<<endl;
        cout<<"=  2. Tambah kategori                                  ="<<endl;
        cout<<"=  3. Barang keluar                                    ="<<endl;
        cout<<"=  4. Cari barang                                      ="<<endl;
        cout<<"=  5. Lihat barang                                     ="<<endl;
        cout<<"=  6. Lihat barang sesuai kategori                     ="<<endl;
        cout<<"=  7. Cek banyak stok barang                           ="<<endl;
        cout<<"=  8. Hapus barang                                     ="<<endl;
        cout<<"=  9. Hapus kategori                                   ="<<endl;
        cout<<"=  0. Keluar                                           ="<<endl;
        cout<<"========================================================"<<endl;
        cout<<" Pilihan (ketik angka saja): "<<endl;
        cin>>pilih;

        switch(pilih)
        {
        case '1' :
        {

        }

        case '2' :
        {

        }

        case '3' :
        {

        }

        case '4' :
        {

        }

        case '5' :
        {

        }

        case '6' :
        {

        }

        case '7' :
        {

        }

        case '8' :
        {

        }

        case '9' :
        {

        }
        default : "Menu yang anda pilih salah, coba lagi"
            ;
        }
    }
    while(pilih!='0');
}
