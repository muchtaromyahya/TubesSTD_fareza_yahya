#include "operasi_list.h"

void InsertAndsort_parent(List_parent &L, address_parent P){
    if(first(L)==NULL){
        insertFirst(L,P);
    }else{
        if(next(first(L))==first(L)){
            address_parent Q=first(L);
            if(info(P).id<info(Q).id){
                insertFirst(L,P);
            }else{
                insertLast(L,P);
            }
        }else{
            address_parent Q=first(L);
            while((info(P).id<info(Q).id)&&(Q!=last(L))){
                Q=next(Q);
            }insertAfter(L,prev(Q),P);
        }
    }
}

void InsertAndsort_relasi(List_relasi &L, address_relasi P){

}
