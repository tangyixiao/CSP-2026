#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","r",stdin);
    long long n,a,c;
    long long cnt = 0;
    string m[1000000000] = {"0"};
    for(int i = 1;i <= n;i++){
        cin >> a >> c;
        while(a>0){
            m[i] = c;
            a--;
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = n;j >=1;j--){
            if(m[i]!=m[j]){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
