#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5e5+5;
int n,m,a[N],cnt[N],pos[N];
bool f[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(pos[a[j]]){
                for(int k=pos[a[j]];k<j;k++){
                    f[a[k]]=0;
                    pos[a[k]]=0;
                }
            }
            pos[a[j]]=j;
            f[a[j]]=1;
        }
        for(int j=1;j<=m;j++){
            cnt[j]+=f[j];
        }
        for(int i=1;i<=m;i++){
            pos[i]=0;
            f[i]=0;
        }
    }
    cnt[a[n]]=n;
    for(int i=1;i<=m;i++){
        cout << cnt[i];
        if(i==m) cout << endl;
        else cout << ' ';
    }
    return 0;
}
//暴力预计48pts

/*今年初三，估计这是最后一次CSP了，甚至还只能考J
我好菜啊
估分300pts
T1签到（red），T2贪心（orange），T3可能是DP（yellow），T4数学？（green or yellow)
LUOGU @ZHANGSIQI7559

AFO

cyq,wo xi hun ni

我想上迷惑行为大赏
*/