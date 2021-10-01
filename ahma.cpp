#include<bits/stdc++.h>
using namespace std;

struct ahma
{
    int sum;
    int carry;
};

ahma ahmaCalc(int x4,int x3,int x2,int x1){
    ahma s;
    int a = ~(x1|x2);
    int b = ~(x3|x4);
    //carry
    s.carry = ~(a|b);
    //sum
    s.sum = ~(a&b);
    return s;
}
