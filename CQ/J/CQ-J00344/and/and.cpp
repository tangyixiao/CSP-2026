/* 考完仔细检查，不要在考场上睡觉。 */
#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5,LOG=31;
int n,m,ans,a[MAXN];
bitset<MAXN> res,bt[LOG];
int main(){
    #ifndef ONLINE_JUDGE
        freopen("and.in","r",stdin);
        freopen("and.out","w",stdout);
    #endif
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int j=LOG-1;j>=0;j--) bt[j][i]=a[i]>>j&1;
    res.set();
    for(int i=LOG-1;i>=0;i--){
        if((res&bt[i]).count()>=m){
            res&=bt[i];
            ans+=1<<i;
        }
    }
    printf("%d",ans);
    return 0;
}
/*
08:58 开 T3
诶不是这 T3 怎么写啊
排序？好像会假吧。
哦是按位与不是按位或。
那就枚举答案能得到的最高位。
看看能不能取到 m 个
如果能就把不行的全部去掉不看了。
拿一个 bitset 存现在有的。
好像做出来了是吧。
嗯对，bitset 吴。迪。
坏了，样例怎么输出 INT_MAX？
我哪里写错了？哦是大于等于。
*/