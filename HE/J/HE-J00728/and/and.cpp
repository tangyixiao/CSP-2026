#include<iostream>
using namespace std;
int v(int a[],int n,int t){
    int tmp,t1=0;
    for(int i=0;i<n;i++){
        tmp=(t & a[i]);
        if(tmp>t1) t1=tmp;
    }
    return t1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    int n,m,tmp=0,t1=0,p1,p2;
    cin>>n>>m;
    int a[n],t=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            tmp=(a[i] & a[j]);
            if(tmp>t){
                t=tmp;p1=a[i];p2=a[j];
            }
        }
    }
    if(m<=2){
        cout<<t;return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i]==p1 || a[i]==p2) a[i]=0;
    }
    for(int i=2;i<m;i++){
        tmp=v(a,n,t1);
        if(tmp>t1) t1=tmp;
    }
    cout<<t1;
    return 0;
}
