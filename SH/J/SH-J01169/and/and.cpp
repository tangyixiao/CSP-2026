#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a, ans=0;
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out","w", stdout);
    for (int i = 1; i <= m; i++){
        scanf("%lld ", &a);
        if( ans == 0){
            ans = a;
        }else{
            ans = ans & a;
        }
    }printf("%lld", a);
    return 0;
}