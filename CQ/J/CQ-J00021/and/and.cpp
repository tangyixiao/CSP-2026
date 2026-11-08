#include <bits/stdc++.h>
using namespace std;
long long a[100000005];
int anwei(){
    return 1;
}
int jz(int a){
    int b=1, c=0;
    while(a){
        b*=10;
        b+=a%2;
        a/=2;
    }
    while(b){
        c*=10;
        c+=b%10;
        b/=10;
    }
    c/=10;
    return c;
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n, m, max_n=0;
    cin >>n>>m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(jz(a[i])&jz(a[i])>max_n)max_n=jz(a[i])&jz(a[i]);
        }
    }
    cout<<max_n;
    return 0;
}

