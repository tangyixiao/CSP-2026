#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    string s;
    int ni;
    char si;
    for (int i=0;i<n;i++){
        cin >> ni >> si;
        s += ni*si;
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if (s[i]!=s[n-1-i]){
            sum++;
        }
    }
    cout << sum;
return 0;
}
