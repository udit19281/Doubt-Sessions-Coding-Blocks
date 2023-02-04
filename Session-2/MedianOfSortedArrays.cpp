#include<bits/stdc++.h>
using namespace std;

int median(vector<int> a, vector<int> b, int n) {
    int i = 0, j = 0, count;
    int m1 = -1, m2 = -1;
    for (count = 0; count <= n; count++) {
        if (i == n) {
            m1 = m2;
            m2 = b[0];
            break;
        }
        else if (j == n) {
            m1 = m2;
            m2 = a[0];
            break;
        }
        if (a[i] < b[j]) {
            m1 = m2;
            m2 = a[i];
            i++;
        }
        else {
            m1 = m2;
            m2 = b[j];
            j++;
        }
    }
    if (n % 2 == 0) return (m1 + m2) / 2;
    return m2;
}

int main(){
    int n;
    cin>>n;
    vector<int> a1(n);
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    vector<int> a2(n);
    for(int i=0; i<n; i++){
        cin>>a2[i];
    }
    cout<<median(a1, a2, n);

    return 0;
}

//Test Case
// 7
// 4 6 8 12 14 16 18
// 3 5 7 11 13 15 17
// 11
// 27
// 0 2 4 5 10 11 12 37 41 44 46 47 53 54 66 67 68 69 71 77 79 80 81 85 88 89 91
// 4 7 8 14 19 23 24 28 31 35 36 36 37 45 47 49 55 59 70 72 75 80 81 85 85 90 96
// 49
