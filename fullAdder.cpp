#include<bits/stdc++.h>
using namespace std;

struct fullAdderStruct
{
    bool sum;
    bool carry;
};

fullAdderStruct fullAdderCalc(bool x3,bool x2,bool x1){
    fullAdderStruct s;
    //carry
    s.sum = (x1^x2^x3);
    //sum
    s.carry = ((x1&x2)|(x2&x3)|(x3&x1));
    return s;
}

// int main(){
//     fullAdderStruct f1;
//     f1 = fullAdderCalc(1,0,1);
//     cout<<f1.carry<<f1.sum<<endl;
// }
