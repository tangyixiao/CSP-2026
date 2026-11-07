#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll,char> plc;
typedef vector<plc> vplc;

int main()
{
    iostream::sync_with_stdio(false);
    cout.tie(nullptr);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n;
    vplc arr;

    cin >> n;

    ll t,sum = 0;
    char c;
    cin >> t >> c;
    sum = t;
    arr.push_back({t,c});

    for(int i = 1; i<n; i++)
    {
        cin >> t >> c;
        sum += t;
        if(c == arr[arr.size() -1].second)

        {

            t += arr[arr.size() -1].first;
            arr.pop_back();
        }
        arr.push_back({t,c});
    }

    if(arr.size() == 1)
    {
        cout << 0;
        return 0;
    }

    ll ans = 0;

    ll piont = 0;
    ll lextra = arr[0].first,rextra = arr[arr.size() - 1].first;
    int l_box = 0,r_box = arr.size() - 1;
    while(piont < sum / 2)

    {
        ll minn = min(lextra,rextra);
        if(arr[l_box].second == arr[r_box].second)
        {
            piont += minn;

            lextra -= minn;
            rextra -= minn;

            if(lextra<=0){l_box++;lextra = arr[l_box].first;}
            if(rextra<=0){r_box--;rextra = arr[r_box].first;}

        }
        else
        {
            piont += minn;

            lextra -= minn;
            rextra -= minn;

            if(lextra<=0){l_box++;lextra = arr[l_box].first;}
            if(rextra<=0){r_box--;rextra = arr[r_box].first;}

            ans += minn;
        }

    }

    cout << ans;


    return 0;
}
