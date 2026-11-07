#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200050];
ll tablet[2000000];
struct num{
    ll a;ll s;
}ii[200050];
bool cmp(num a,num b){
    if(a.a=b.a)return 1;
    else if(a.s>b.s)return 1;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    ll z=0,x=1,v=2;
    for(int i=1;i<=2000000;i++){
        if(i%4==1){
            tablet[i]=z;
            z++;
        }else if(i%4==2){
            tablet[i]=x;
        }else if(i%4==3){
            tablet[i]=x;
            x++;
        }else if(i%4==0){
            tablet[i]=v;
            v++;
        }
    }
    ll n,m;
    cin>>n>>m;
    for(int k=1;k<=n;k++){
        cin>>ii[k].a;
        ii[k].s=tablet[ii[k].a];
    }
    sort(ii+1,ii+n+1,cmp);
    int sum=ii[1].a&ii[2].a;
    for(int i=1;i<=m;i++){
        sum&=ii[i].a;
    }
    cout<<sum;
    return 0;
}
