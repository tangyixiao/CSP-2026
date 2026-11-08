#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int >
#define pll pair<long long ,long long >

using namespace std;
const int N=200005;
int n,m,ans;
int arr[N];
vector<int >ve[31];
void sol(){
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        for(int j=30;j>=0;--j){
            if(arr[i]&(1<<j)){
                ve[j].push_back(i);
            }
        }
    }
    
    for(int i=30;i>=0;--i){
        if(ve[i].size()>=m){
            bitset<N>flg;
            flg.reset();

            ans|=(1<<i);
            for(auto j:ve[i]){
                flg[j]=1;
            }
            for(int j=i-1;j>=0;--j){
                bitset<N>flg2;
                flg2.reset();
                for(auto k:ve[j]){
                    flg2[k]=1;
                }
                flg2&=flg;
                if(flg2.count()>=m){
                    ans|=(1<<j);
                    swap(flg,flg2);
                }
            }
            break;
        }
    }
    cout<<ans;


}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    int t=1,c;
    //cin>>t;
    //cin>>c;
    while(t--){
        sol();
    }
    //cerr<<'\n'<<clock()<<'\n';
    return 0;
}
/*
author:_aa_

*/