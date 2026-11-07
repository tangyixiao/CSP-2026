#include<bits/stdc++.h>
using namespace std;
int c[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,a,cnt = 0,sum = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a;
        char t;
        cin >> t;
        for(int j = sum + 1;j <= sum + a;j++){
            c[j] = t - 'a';
        }
        sum += a;
    }
    for(int i = 1;i <= sum / 2;i++){
        if(c[i] != c[sum - i + 1]) cnt++;
    }
    cout << cnt;
    return 0;
}
