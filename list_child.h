#ifndef LIST_CHILD_H_INCLUDED
#define LIST_CHILD_H_INCLUDED

/** child = single linked list yang berisi kategori makanan & minuman
    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa double linked list.
                         2. Jangan lupa ganti yang di list_child.cpp ke single linked list

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/


#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info


typedef string /** tipe data string diganti ke infotype */ infotype_child;

/** tambahin infotype buat kategori : id, (nama) kategori, dll(kalau mau nambahin silahkan) */

//tambahin disini struct infotype nya

//tambahan dari fareza, bukan pak andit

/** ========================================================================================*/

typedef struct elmlist_child *address_child;

struct elmlist_child{
    infotype_child info;
    address_child next;
    address_child prev;
};

struct List_child{
    address_child first;
    address_child last;
};

/** TIDAK PERLU MODIFIKASI */
void createList(List_child &L);
void insertFirst(List_child &L, address_child P);
void insertLast(List_child &L, address_child P);
void insertAfter(address_child Prec, address_child P);
void deleteFirst(List_child &L, address_child &P);
void deleteLast(List_child &L, address_child &P);
void deleteAfter(address_child Prec, address_child &P);


/** PERLU MODIFIKASI */
address_child alokasi(infotype_child x);
void dealokasi(address_child &P);
address_child findElm(List_child L, infotype_child x);
void printInfo(List_child L);


#endif // LIST_CHILD_H_INCLUDED
