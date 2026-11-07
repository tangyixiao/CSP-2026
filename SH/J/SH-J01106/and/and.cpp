#include<bits/stdc++.h>
using namespace std;
int an(int x,int y){
    int r=0;
    for(int i=30;i>=0;i--){
        if(x>=pow(2,i)&&y>=pow(2,i)){
            x-=pow(2,i);
            y-=pow(2,i);
            r+=pow(2,i);
        }
        else if(x>=pow(2,i))x-=pow(2,i);
        else if(y>=pow(2,i))y-=pow(2,i);

    }
    return r;
}
int l2(int k){
    int cnt=0;
    while(k>0){
        cnt++;
        k/=2;
    }
    return cnt-1;
}
bool cmp(int a,int b){
    return a>b;
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,a[200005],ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    int t=l2(a[1]);
    while(t--){
        sort(a+1,a+n+1,cmp);
        bool f=true;
        for(int i=2;i<=m;i++){
            if(an(a[i],a[i+1])<pow(2,l2(a[i]))){
                f=false;
                break;
            }
        }
        if(f){
            ans+=pow(2,t);
            for(int i=1;i<=n;i++){
                if(a[i]<pow(2,t)){
                    n=i;
                }
            }
        }
        for(int i=1;i<=n;i++){
            a[i]%=pow(2,t);
        }

    }



    cout<<ans;
    return 0;
}
