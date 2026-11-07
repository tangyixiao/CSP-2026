#include<bits/stdc++.h>
using namespace std;
long long a[100000000],m=0,n=0,maxzhi=0;
void c(long long po,long long zhi,long long sw){
    if(sw==0){
        maxzhi = max(maxzhi,zhi);
        return;
    }else{
        for(long long i = po+1;i<=n;i++){
            c(i,(zhi & a[i]),sw-1);
        }
    }
    return;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(long long i = 1;i<=n;i++){
        cin >> a[i];
    }
    for(long long i = 1;i<=n-m+1;i++){
        c(i,a[i],m-1);
    }
    cout << maxzhi;
    return 0;
}
