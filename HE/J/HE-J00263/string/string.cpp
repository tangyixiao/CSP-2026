#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct node{
    long long k;
    char c;
}a[N];
int n;
long long sum;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].k>>a[i].c;
    }
    long long l=1,r=n;
    while(l<r){
        if(a[l].c!=a[r].c){
            sum+=min(a[l].k,a[r].k);
        }
        if(a[l].k<a[r].k){
            a[r].k-=a[l].k;
            l++;
        }else{
            a[l].k-=a[r].k;
            r--;
        }
    }
    cout<<sum;
    return;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    while(t--){
    	solve();
    }

    return 0;
}
