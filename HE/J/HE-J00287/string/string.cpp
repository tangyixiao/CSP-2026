#include <bits/stdc++.h>
using namespace std;


string s[10000000];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int a;
        string c;
        cin >> a >> c;
        s[i]=c;
    }
    for(int i=2; i<=n; i++){
        if(s[i-1]!=s[i]){
            return 0;
        }
    }
    cout << "0";
    return 0;
}

