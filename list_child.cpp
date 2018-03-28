#include "list_child.h"

/** child = single linked list yang berisi kategori makanan & minuman
    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa double linked list.
                         2. Jangan lupa ganti yang di list_child.cpp ke single linked list

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/

void createList(List_child &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address_child alokasi(infotype_child x) {
    address_child P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List_child &L, address_child P) {
    if(first(L) == NULL) {
        last(L) = P;
        first(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void printInfo(List_child L) {
    address_child P = first(L);
    while(P !=NULL) {
        cout<<"->"<<info(P)<<endl;
        P = next(P);
    }
}


address_child findElm(List_child L, infotype_child x) {
    address_child P = first(L);
    while(P != NULL) {
        if(info(P)==x) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_child &Prec, address_child P) {
    prev(next(Prec)) = P;
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
}
