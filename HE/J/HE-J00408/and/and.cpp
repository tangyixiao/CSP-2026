#include<iostream>
#include<cmath>
using namespace std;
int n,m,a[200002];
int p=pow(2,30)-1;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    long long mx=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
        }
    }
    if(m==1){
        cout<<mx;
        return 0;
    }
    if(m==2){
        long long ma=0;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int x=a[i]&a[j];
                if(ma<x){
                    ma=x;
                }
            }
        }
        cout<<ma;
        return 0;
    }
    if(m==n){
        long long s=p;
        for(int i=0;i<n;++i){
            s&=a[i];
        }
        cout<<s;
        return 0;
    }
    long long ma=0;
    for(int i=1;i<pow(2,n);++i){
        long long s=p;
        int j=i,cnt=0,w=0;
        while(j){
            if(j&1==1){
                s&=a[cnt];
                ++w;
            }
            j>>=1;
            ++cnt;
        }
        if(s>ma&&w==m){
            ma=s;
        }
    }
    cout<<ma;
    return 0;
}
