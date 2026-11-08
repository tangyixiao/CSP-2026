#include<bits/stdc++.h>
using namespace std;

int n,m;

vector <int> input;
vector <int> might;

bool cmp(int a,int b){
    return a>b;
}

void solve(int input){
    for(int i=input;i>=0;i--){
        int g=(1<<i);
        int cnt=0;
        for(auto v : might)
            if(v&g)
                ++cnt;

        if(cnt&&cnt<m)
            for(auto& v : might)
                v&=~(1<<i);
    }

    sort(might.begin(),might.end(),cmp);

    int ans=~0;
    for(int i=0;i<m;i++)
        ans&=might[i];
    cout<<ans;

    return ;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    cin>>n>>m;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        input.push_back(a);
    }

    for(int i=30;i>=0;i--){
        int g=(1<<i);
        int cnt=0;
        for(auto v : input)
            if(v&g)
                ++cnt;
        
        if(cnt>=m){
            for(auto v : input)
                if(v&g)
                    might.push_back(v);
            
            solve(i);
            return 0;
        }
    }

    cout<<"0";

    return 0;
}