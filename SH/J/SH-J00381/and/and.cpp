#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
using ll = long long;
const int MAX_N=200064;
ll m, n, a, bm[32], ans;
list<ll> l0, l1;
bool cmp(int a, int b){
    return a>b;
}
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        l1.push_back(a);
    }
    for(int i=32;i--;){
        ll b=(1LL<<i);
        list<ll> nl0, nl1;
        for(auto it=l1.begin();it!=l1.end();++it){
            if (*it&b)
                bm[i]++, nl1.push_back(*it);
            else
                nl0.push_back(*it);
        }
        if (bm[i]>=m){
            l1=move(nl1);
            l0=move(nl0);
        }
    }
    for(int i=0;i<32;i++){
        if(bm[i]>=m) ans+=(1LL<<i);
    }
    cout<<ans;
    return 0;
}
