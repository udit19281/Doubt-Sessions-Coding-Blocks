#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int a=2147483647;   //INT_MAX
    bitset<32> b(a);
    cout<<a<<", "<<b<<endl;
    
    // 1. Left shift 31 times, signed int c, will store 2s compliment
    int c=a<<1;
    bitset<32> d(c);
    cout<<c<<", "<<d<<endl;

    int e=-2147483648; //INT_MIN
    bitset<32> f(e);
    cout<<e<<", "<<f<<endl;
    
    return 0;
}