#include<bits/stdc++.h>
using namespace std;

long long a[500005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n;cin >>n;
    int m;cin >>m;
    for(int i=1;i<=n;i++){
        cin >>a[i];
    }
    sort(a+1,a+n+1);
    int sum=a[1];
    for(int i=2;i<=m;i++){
        sum=sum&a[i];
    }
    cout <<sum;





return 0;
}
