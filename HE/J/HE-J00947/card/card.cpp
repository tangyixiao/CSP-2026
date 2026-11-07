#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin >> n >> m;
    int l[10010];
    for (int i = 1;i <= n;i++){
        cin >> l[i];
    }
    int num[10010];
    for (int i = 1;i <= n;i++){
        int w[10010];
        for (int j = i;j <= n;j++){
            w[j] = l[j];
            for (int x = 1;x < j;x++){
                if (w[x] == w[j]){
                    for (int s = x;s < j;s++){
                        w[s] = 0;
                    }
                }
            }
        }
        for (int x = i;x <= n;x++){
            if (w[x] != 0){
                num[w[x]]++;
            }
        }
    }
    for (int i = 1;i <= m;i++){
        cout << num[i] << " ";
    }

    return 0;
}
