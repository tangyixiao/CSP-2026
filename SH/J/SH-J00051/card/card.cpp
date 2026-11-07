#include<bits/stdc++.h>
using namespace std;
int a[500050];
bool flag[300050];
int flagid[300050];
int cnt[300050];
int main(){

    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cout<<n<<" ";
    }
    return 0;
}
