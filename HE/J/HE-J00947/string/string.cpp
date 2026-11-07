#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    string L;
    cin >> n;
    for (int i = 1;i <= n;i++){
        int a;
        string b;
        cin >> a >> b;
        for (int j = 1;j<= a; j++){
            L.append(b);
        }
    }
    int cnt = 0;
    for (int i = 0;i * 2 <= L.size();i++){
        if (L[i] != L[L.size()-i-1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
