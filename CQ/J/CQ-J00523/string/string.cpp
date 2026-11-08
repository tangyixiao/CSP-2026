#include<bits/stdc++.h>
#define int long long
using namespace std;

vector <pair <int,char> > input;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        char ch;

        cin>>a>>ch;

        sum+=a;
        input.push_back({a,ch});
    }

    int lp=0,lu=0;
    int rp=n-1,ru=0;
    int ans=0;
    while(rp>lp){
        int cal=min(input[lp].first-lu,input[rp].first-ru);
        lu+=cal,ru+=cal;
        if(input[lp].second!=input[rp].second) ans+=cal;
        if(lu>=input[lp].first) ++lp,lu=0;
        if(ru>=input[rp].first) --rp,ru=0;
    }

    cout<<ans;

    return 0;
}