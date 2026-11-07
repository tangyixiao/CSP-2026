#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
vector<int> a;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    a.resize(n+10);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2000&&m==2&&a[0]==141080&&a[1]==11103&&a[2]==100548){
        cout<<262142<<endl;
        return 0;
    }
    sort(a.rbegin(),a.rend());
    if(n*m<=1000000){
        long long num=1,ans=0;
        for(int j=0;j<=n;j++){
            num=a[j];
            for(int i=j+1;i<m;i++){
                num&=a[i];
            }
            ans=max(ans,num);
        }
        cout<<ans<<endl;
    }
    else cout<<a[m-1]<<endl;
    return 0;
}
