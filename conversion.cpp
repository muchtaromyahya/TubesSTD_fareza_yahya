#include "conversion.h"

string IntToStr(a){
    word<<a;
    return word.str();
}

int StrToInt(b){
    number=0;
    stringstream convert(b);
    convert>>number;
    return number;
}
