#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED

/** parent = double circular list yang isinya berupa nama makanan

    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa single linked list.
                         2. Jangan lupa ganti yang di list_parent.cpp ke double circular

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info


typedef int /** tipe data int diganti ke infotype */ infotype_parent;

/** tambahin infotype buat barangnya : id, nama barang, stok, dll(kalau mau nambahin silahkan) */

//tambahin disini struct infotype nya

/** ========================================================================================*/

typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
};

struct List_parent {
    address_parent first;
};


/** TIDAK PERLU MODIFIKASI */
void createList(List_parent &L);
void insertFirst(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);


/** PERLU MODIFIKASI */
address_parent alokasi(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_parent L, infotype_parent x);
void printInfo(List_parent L);


#endif // LIST_PARENT_H_INCLUDED
