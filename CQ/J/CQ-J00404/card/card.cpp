#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    scanf("%d%d",&n,&m);
    //cin >> n >> m;
    for(int i = 1;i <= n;i++)
        scanf("%d",&a[i]);
        //cin>>a[i];
    for(int t = 1;t <= n;t++){
        int top = 0,c[500010];
        for(int i = t;i <= n;i++){
            int k = a[i];
            bool f = 0;
            for(int j = 1;j <= top;j++)
                if(c[j] == k){
                    f = 1;
                    top = j;
                    break;
                }
            if(!f)
                c[++top] = k;
        }
        for(int i = 1;i <= top;i++)
            b[c[i]]++;
    }
    for(int i = 1;i <= m;i++)
        printf("%d ",b[i]);
        //cout<<b[i]<<' ';
    return 0;
}
