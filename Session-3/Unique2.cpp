#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0, y=0;
    int sum=0;
    for(int i=0;i<n;++i){
        sum^=arr[i];
    }
    int rightmostsetbit = sum&(~sum +1);
    for(int i=0;i< n;i++){
        if(arr[i] & rightmostsetbit){
            x=x^arr[i];
        }
        else{
            y^=arr[i];
        }
    }
    cout<<min(x,y)<<" "<<max(x,y)<<"\n";
    return 0;
}
