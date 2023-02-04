#include<iostream>
#include<string.h>
using namespace std;
void count_bits(long long int n){
    int len,i=0;
    string str=to_string(n);
    len=str.size();
    for(i=0;i<len;i++){
        if(str[i]=='0'){
            str[i]='5';
        }
        else{
            continue;
        }
    }
    cout<<str;
    
    

}
int main(){
    long long int n;
    cin>>n;
    count_bits(n);

}