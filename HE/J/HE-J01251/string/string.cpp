#include <bits/stdc++.h>
using namespace std;

const int MAX_N=2e5;
using ll=long long;

int n;
ll a[MAX_N+10];
ll sum_left[MAX_N+10];
ll sum_right[MAX_N+10];
int value[MAX_N+10];
char letter[10];
ll lsh[MAX_N*2+10];

int main(){

    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%lld%s", &a[i], letter+1);
        value[i]=letter[1]-'a'+1;
    }
    sum_left[0]=sum_right[0]=0;
    int cnt=0;
    for(int i=1; i<=n; i++){
        sum_left[i]=sum_left[i-1]+a[i];
        sum_right[i]=sum_right[i-1]+a[n-i+1];
        lsh[++cnt]=sum_left[i];
        lsh[++cnt]=sum_right[i];
    }
    sort(lsh+1, lsh+cnt+1);
    cnt=unique(lsh+1, lsh+cnt+1)-lsh-1;
    ll ans=0;
    for(int i=1; i<=cnt; i++){
        int one=lower_bound(sum_left+1, sum_left+n+1, lsh[i])-sum_left;
        int two=lower_bound(sum_right+1, sum_right+n+1, lsh[i])-sum_right;
        if(value[one]!=value[n+1-two])    ans+=lsh[i]-lsh[i-1];
    }
    printf("%lld\n", ans/2);

    return 0;

}
