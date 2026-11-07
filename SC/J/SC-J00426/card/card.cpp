#include<bits/stdc++.h>
using namespace std;
#define db(x...) fprintf(stderr,x)
const int N=5e5+5,M=3e5+5;
int n,a[N],m,lst[M];
int ans[M],s[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i) cin>>a[i],lst[a[i]]=i;
    for(int i=1;i<=n;++i){
        ++s[i];
        s[lst[a[i]]+1]+=s[i];
    }
    for(int i=1;i<=n;++i) ans[a[i]]+=s[i];
    for(int i=1;i<=m;++i) printf("%d%c",ans[i]," \n"[i==m]);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
/*
final at 9:05

脚踢到电源线使电脑死机还是太忍俊不禁了。

看到 J 组 T3 令我想起了不好的回忆。

里奔跑牛逼。
*/