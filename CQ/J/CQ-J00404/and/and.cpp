#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
bool cmp(const int &x,const int &y){
    return x > y;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    //cin>>n>>m;
    for(int i = 1;i <= n;i++)
        scanf("%d",&a[i]);
        //cin >> a[i];
    sort(a + 1,a + n + 1,cmp);
    int l = 0;
    while(ans == 0 && l + m <= n){
        ans = a[++l];
        for(int i = l + 1;i < l + m;i++)
            ans &= a[i];
    }
    printf("%d",ans);
    //cout<<ans;
    return 0;
}
