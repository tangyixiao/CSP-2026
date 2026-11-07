#include <bits/stdc++.h>
using namespace std;

struct andu{
    long num,place;
};

bool cmp1(andu a,andu b){
    return a.num>b.num;
}

bool cmp2(andu a,andu b){
    if(a.place!=b.place) return a.place>b.place;
    return a.num>b.num;
}

int n,m;
andu a[200005];

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i].num;
    }
    sort(a+1,a+n+1,cmp1);
    for(int i=n-m;i<=n;i++){
        long u=a[i].num;
        while(u!=0){
            a[i].place+=u%2;
            u/=2;
        }
    }
    sort(a+n-m+1,a+n+1,cmp2);
    long ans=a[1].num;
    for(int i=2;i<=m;i++){
        ans&=a[i].num;
    }
    cout<<ans;
    return 0;
}