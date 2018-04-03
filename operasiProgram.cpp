#include "operasiProgram.h"


void tambahBarang(List_parent &LP, List_relasi &LR, List_child &LC)
{
    /** isi dari procedure tambah barang :
            1. inputan berupa : nama barang, jumlah stok yg dimasukkan, kategori barang
            2. 2.1. Lakukan searching di list child, buat nyari kategorinya ada atau gak.
               2.2. Kalo gak ada kategorinya, outputin "gak ada kategori, masukkin kategori dulu".
                    abis itu ngejalanin prosedur tambah kategori.
               2.3. Kalo ada kategorinya, alokasi P ke list parent. Lalu simpen address alokasi parent ke variabel,
                    address hasil cari kategori juga dimasukkin ke variabel lain. Abis itu, jalanin prosedur alokasi list relasi.
            3. Jalanin searching buat nyari nama barang di list relasi. Kalo ketemu, output:("data berhasil dimasukkan"),
               kalo nggak ketemu, output("barang tdk berhasil dimasukkan")

    */

    infotype_parent x;
    infotype_child x2;
    cout<<"================================Tambah Barang====================================="<<endl;
    cout<<"= 1. Nama barang =                                                               ="<<endl;
    cin>>x.nama_brg;
    cout<<"= 2. Masukkan Kategori =                                                         ="<<endl;
    /** cin>>x2.nama_kategori */
    cout<<"= 3. Banyak barang yang dimasukkan =                                             ="<<endl;
    cin>>x.stok;
    cout<<"=================================================================================="<<endl;

    if(first(LP)!=NULL)                                                  //cek apakah list parent kososng atau gak
    {
        address_parent alamat_parent=findElm(L,x);                       //cari elemen duplikasi di parent
        if(alamat_parent==NULL)                                          //elemen duplikasi tidak ditemukan
        {
            if(first(LC)!=NULL)                                          //Cek child kosong ato gak
            {
                address_child alamat_child=findElm(L,x2);                //Cek apakah kategori dari inputan ada atau gak di list
                if(alamat_child!=NULL)
                {
                    if(x.id<100)
                    {
                        x.id=x.id+1;
                    }
                    else
                    {
                        cout<<"barang penuh"<<endl;
                    }
                    address_parent P=alokasi(x);
                    address_relasi Q=alokasi(P,alamat_child);
                    InsertAndsort_parent(L,P);
                }
                else                                                    //jika kategori di child tidak ada yang sesuai dengan kategori inputan
                {
                    /**
                        1. output : maaf, kategori tersebut tidak ada. Silahkan tambahkan dulu
                        2. jalankan prosedur tambah kategori
                    */
                }
            }
            else  //child kosong
            {
                /**
                    1. output : maaf, kategori tersebut tidak ada. Silahkan tambahkan dulu
                    2. jalankan prosedur tambah kategori
                */
            }
        }else{                                                 //ditemukan nama barang yang sama
            cout<<"Maaf barang tersebut sudah ada"<<endl;
        }
    }else{                   //jika parent kosong
        if(first(LC)!=NULL)                                          //Cek child kosong ato gak
            {
                address_child alamat_child=findElm(L,x2);                //Cek apakah kategori dari inputan ada atau gak di list
                if(alamat_child!=NULL)
                {
                    if(x.id<100)
                    {
                        x.id=x.id+1;
                    }
                    else
                    {
                        cout<<"barang penuh"<<endl;
                    }
                    address_parent P=alokasi(x);
                    InsertAndsort_parent(L,P);
                }
                else
                {
                    /**
                        1. output : maaf, kategori tersebut tidak ada. Silahkan tambahkan dulu
                        2. jalankan prosedur tambah kategori
                    */
                }
            }
            else
            {
                /**
                    1. output : maaf, kategori tersebut tidak ada. Silahkan tambahkan dulu
                    2. jalankan prosedur tambah kategori
                */
            }
    }

}
