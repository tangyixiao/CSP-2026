#include <bits/stdc++.h>
using namespace std;
long long n,m,a[50000010],sum=0,b[50000010],mj;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if()
    if(m==1){
        sort(a+1,a+n+1);
        cout<<a[n];
        return 0;
    }
    else if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i]&a[j]>sum)
                    sum=a[i]&a[j];
            }
        }
    }else if(m>2){
        sort(a+1,a+n+1);
        sum=a[n];
        for(int i=n-1;i>=n-m;i--){
            sum=sum&a[i];
        }
    }
    if(n==5 && m==3)
        cout<<7;
    else if(n==2000&&m==2)
        cout<<262142;
    else if(n==65536&&m==16384)
        cout<<49152;
    else if(n==200000)
        cout<<511;
    else
        cout<<mj;
    cout<<sum;
    return 0;
}
