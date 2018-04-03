#include "list_parent.h"

/** parent = double circular list yang isinya berupa nama makanan

    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa single circular linked list.
                         2. Jangan lupa ganti yang di list_parent.cpp ke double circular
    - edited 2/4/2018  : 1. Belom ngisi delete after

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/

void createList(List_parent &L) {
    /**
    * FS : first(L) diset Nil
    */
    first(L) = NULL;
    last(L) = NULL;
}

address_parent alokasi(infotype_parent x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List_parent &L, address_parent P) {
    /**
    * IS : List_parent L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List_parent L
    *      next dari last elemen menunjuk ke first elemen
    */
    address_parent Q;
    if(first(L) == NULL) {
        first(L) = P;
        next(P) = P;
        prev(P) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L))=P;
        next(last(L)) = P;
        prev(P) = last(L);
        first(L) = P;
    }
}

void insertAfter(List_parent &L, address_parent Prec, address_parent P){
    if(Prec==NULL){
        return;
    }else{
        next(P)=next(Prec);
        prev(next(P))=P;
        next(Prec)=P;
        prev(P)=Prec;
    }

}

void insertLast(List_parent &L, address_parent P){
    if(first(L)==NULL){
        first(L)=P;
        last(L)=P;
        next(P)=P;
        prev(P)=P;
    }else{
        next(P)=first(L);
        next(last(L))=P;
        prev(P)=last(L);
        last(L)=P;
        prev(first(L))=last(L);
    }
}

void deleteFirst(List_parent &L, address_parent &P){
    if(first(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{
        if(next(first(L))==first(L)){
            P=first(L);
            next(P)=NULL;
            prev(P)=NULL;
            first(L)=NULL;
            last(L)==NULL;
        }else{
            P=first(L);
            next(last(L))=next(P);
            prev(next(P))=last(L);
            first(L)=next(P);
            prev(P)=NULL;
            next(P)=NULL;
        }
    }
}

void deleteLast(List_parent &L, address_parent &P){
    if(last(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{
        if(next(first(L))==first(L)){
            P=first(L);
            next(P)=NULL;
            prev(P)=NULL;
            first(L)=NULL;
            last(L)==NULL;
        }else{
            P=last(L);
            next(prev(P))=first(L);
            prev(first(L))=prev(P);
            last(L)=prev(P);
            prev(P)=NULL;
            next(P)=NULL;
        }
    }
}

void deleteAfter(List_parent &L, address_parent Prec, address_parent &P){
    if(Prec==NULL){
        return;
    }else{
        if(Prec==first(L)){
            deleteFirst(L,P);
        }else if(Prec==last(L)){
            deleteLast(L,P);
        }else{
            P=Prec;
            next(prev(P))=next(P);
            prev(next(P))=prev(P);
            prev(P)=NULL;
            next(P)=NULL;
        }
    }
}

void printInfo(List_parent L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    address_parent P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<<info(P)<<endl;
            P = next(P);
        } while((P)!=first(L));
    }
}

address_parent findElm(List_parent L, infotype_parent x) {
    /**
    * IS : List_parent L mungkin kosong
    * FS : mengembalikan elemen dengan info nim = x.nim,
    * FS : mengembalikan elemen dengan info = x,
           mengembalikan Nil jika tidak ditemukan
    */
    address_parent P = first(L);
    do {
        if(info(P).nama_brg == x.nama_brg) {
            return P;
        }
        P = next(P);
    } while(P != first(L));
    return NULL;
}
