#include<bits/stdc++.h>
using namespace std;
long long n,m,a[10000000],tab[10000],ans[10000];
void d(int po,int we,int j){
    tab[we] = a[po];
    int l = we;
    for(int k = 1;k<l;k++){
        if(tab[k]== tab[l]){
            for(int j = k;j<=l;j++){
                tab[j] = 0;
            }
            tab[k] = a[po];
            we= k;
            break;
        }
    }
    if(po >= n){
        for(int k = 1;k<=we+1;k++){
            ans[tab[k]]++;
            tab[k]=0;
        }
        return;
    }
    d(po+1,we+1,j);
    return;
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i =1;i<=n;i++){
        cin >> a[i];
    }
    for(int i = 1;i<=n;i++){
        d(i,1,i);
    }
    for(int i = 1;i<=m;i++){
        cout << ans[i] << " ";
    }
    return 0;
}
