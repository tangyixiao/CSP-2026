#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
ll n,m;
vector<int> a;
bool cmp(ll x,ll y){
    return x>y;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        a.push_back(x);
    }
    unique(a.begin(),a.end());
    sort(a.begin(),a.end(),cmp);
    cout << a[m-1] << endl;
    return 0;
}
//这似乎是一个fake做法？