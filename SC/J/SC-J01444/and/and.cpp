#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
bool have[N];
int ans;
vector<int>can;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        have[i]=1;
    }
    for(int i=30;i>=0;i--){
        int cnt=0;
        can.clear();
        for(int j=1;j<=n;j++){
            if(!have[j])continue;
            if((a[j]>>i)&1){
                can.push_back(j);
                cnt++;
            }
        }
        if(cnt>=m){
            for(int j=1;j<=n;j++)have[j]=0;
            for(int d:can){
                have[d]=1;
            }
            ans+=(1<<i);
        }
    }
    cout<<ans<<'\n';
    return 0;
}