#include<bits/stdc++.h>
using namespace std;

map <int,int> ans;
vector <int> input;
map <int,int> record;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        input.push_back(a);
    }

    vector <int> last;
    for(int i=n-1;i>=0;i--){
        if(record[input[i]]){
            while(last.back()!=input[i]){
                --record[last.back()];
                last.pop_back();
            }
            --record[last.back()];
            last.pop_back();
        }

        last.push_back(input[i]);
        ++record[input[i]];

        cout<<"\t ";
        for(auto v : last){
            ++ans[v];
            cout<<v<<' ';
        }

        cout<<"\n";
        for(int i=1;i<=m;i++)
            cout<<ans[i]<<" ";

        cout<<"\n";
    }

    for(int i=1;i<=m;i++)
        cout<<ans[i]<<" ";

    return 0;
}