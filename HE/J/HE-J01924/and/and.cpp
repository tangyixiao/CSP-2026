#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vvll arr(37);

int main()
{
    iostream::sync_with_stdio(false);
    cout.tie(nullptr);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);


    long long ans;

    int n,m;
    cin >> n >> m;


    for(int i = 0; i<n; i++)
    {
        long long raw,tmp;
        cin >> raw;
        tmp = raw;
        for(int i = 0; i<35&&tmp; i++)
        {
            if(tmp&1) arr[i].push_back(raw);
            tmp>>=1;
        }
    }



    for(int i = 35; i>=0; i--)
    {
        if(arr[i].size() < m) continue;
        sort(arr[i].begin(),arr[i].end());

        long long ans = arr[i][arr[i].size() - 1];
        for(int j =1; j < m; j++){
            ans &= arr[i][arr[i].size() - 1 - j];
        }


        cout << ans;
        return 0;
    }
    cout << 0;
    return 0;
}
