#include "conversion.h"

string IntToStr(a){
    word<<a;
    return word.str();
}

int StrToInt(b){
    int number;
    stringstream convert(b);
    convert>>number;
    return number;
}
