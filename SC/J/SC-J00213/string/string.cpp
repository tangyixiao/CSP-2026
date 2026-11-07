#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+10;
int pos[maxn];
char s[2];
int arr[maxn];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%s",&arr[i],s);
        pos[i]=s[0];
    }
    int l=1,r=n;
    long long sum=0;
    while(l<r){
        int mn=min(arr[l],arr[r]);
        if(pos[l]!=pos[r]) sum+=mn;
        arr[l]-=mn,arr[r]-=mn;
        if(!arr[l]) l++;
        if(!arr[r]) r--;
    }
    printf("%lld\n",sum);
}