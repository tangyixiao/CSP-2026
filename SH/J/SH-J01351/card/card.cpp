#include <bits/stdc++.h>
using namespace std;

const int mxn=5e5+5;
int a[mxn],ans[mxn];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        vector<int> tong(mxn,-1);
        int pos=0;
        vector<int> pai;
        for(int j=i;j<=n;++j){
            if(tong[a[j]]==-1){
                pai.push_back(a[j]);
                tong[a[j]]=pos;
                pos++;
            }else{
                for(int q=tong[a[j]];q<pos;++q){
                    tong[pai[q]]=-1;
                    pai[q]=0;
                }
                pai.push_back(a[j]);
                tong[a[j]]=pos;
                pos++;
            }
        }
        for(int j=1;j<=n;++j){
            if(tong[j]!=-1)ans[j]++;
        }
    }
    for(int i=1;i<=m;++i)cout<<ans[i]<<" ";
    return 0;
}
