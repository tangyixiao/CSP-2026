#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int m,n;
    vector<int> a;vector<int> table;vector<int> ans;vector<int> mm;
    cin>>n>>m;
    int in;
    for(int i=0;i<n;i++){
        cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<m;i++)
    {
        ans.push_back(0);
        mm.push_back(i+1);
    }
    for(int i=1;i<=n;i++){
        table.clear();
        table.push_back(a[i-1]);
        for(int j=i;j<n;j++){
            table.push_back(a[j]);
            for(int p=0;p<table.size()-1;p++){
                if(table[p]==a[j]){table[p]=0;for(int s=p;s<table.size()-1;s++){table[s]=0;}}
            }
        }
        for(int b=0;b<table.size();b++){
            for(int bm=0;bm<m;bm++)
                if(table[b]==mm[bm]){
                    ans[bm]++;
                    break;
                }
        }
    }
    for(int an=0;an<m;an++)
    {cout<<ans[an]<<" ";}
    return 0;
}
