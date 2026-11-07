#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a[200005];
int b[2005][2005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    bool flagb=1,flag4=1;
    for(int i=1; i<=n; ++i){
        scanf("%d",&a[i]);
        if(a[i]!=i-1)
            flagb=0;
        if(a[i]>4)
            flag4=0;
    }
    sort(a+1,a+1+n);
    if(m==1){
        printf("%d",a[n]);
        return 0;
    }
    if(m==2){
        int ans=1;
        for(int i=1; i<=n; ++i){
            for(int j=i+1; j<=n; ++j){
                ans=max(ans,a[i]&a[j]);
            }
        }
        printf("%d",ans);
        return 0;
    }
    if(m==n){
        int ans=a[1];
        for(int i=1; i<=n; ++i)
            ans&=a[i];
        printf("%d",ans);
        return 0;
    }
    if(flag4){
        int cnt[5];
        for(int i=1; i<=n; --i){
            cnt[a[i]]++;
        }
        if(cnt[4]>=m)
            printf("%d",4);
        else if(cnt[3]>=m)
            printf("%d",3);
        else if(cnt[3]>0 && cnt[3]+cnt[1]>=m)
            printf("%d",3);
        return 0;
    }
    int ans=a[n];
    for(int i=n; i>=n-m+1; --i)
        ans&=a[n];
    printf("%d",ans);
    return 0;

}
