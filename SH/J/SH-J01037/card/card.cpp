#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("card.in", "read", stdin);
    freopen("card.out", "write", stdout);
    long long n, m;
    cin >> n >> m;
    long long ans_bin[m+1];
    for(long long j=1; j<=m; j++){
        ans_bin[j] = 0;
    }
    long long cards[n+2];
    for(long long i=1; i<=n; i++){
        cin >> cards[i];
    }
    cards[n+1] = 0;
    for(long long i=1; i<=n; i++){
        int index = i;
        while(index<=n){
            bool sign = true;
            for(int j=index+1; j<=n; j++){
                if (cards[j] == cards[index]){
                    index = j;
                    sign = false;
                    break;
                }
            }
            if (sign){
                ans_bin[cards[index]]++;
                index++;
            }
        }
    }
    for(long long j=1; j<=m; j++){
        cout << ans_bin[j] << ' ';
    }
    return 0;
}
