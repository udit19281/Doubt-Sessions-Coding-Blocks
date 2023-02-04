#include<iostream>
using namespace std;
void flip(int arr[],int k,int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==k)
        {
            if(arr[k]==1)
            arr[k]=0;
            else
            arr[k]=1;
        }
    }
}
int main()
{
    int n,count=0,tempcount=0;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int t=0;t<n;t++)
            {
                arr[t]=arr2[t];
            }
            int c1=0;
            for(int k=i;k<=j;k++)
            {
                cout<<"k="<<k<<" ";

                // flip(arr,k,n);
            }
            cout<<endl;

            tempcount=0;
            for(int l=0;l<n;l++)
            {
                //cout<<"->>"<<arr[l];
                if(arr[l]==1)
                tempcount++;
            }
            //cout<<"count"<<tempcount<<endl;
            if(tempcount>count)
            count=tempcount;
        }
    }
    cout<<count;
}