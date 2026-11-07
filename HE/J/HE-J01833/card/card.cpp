#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;int cnt[100010];int n,m,k;
bool f(int k)
{
    for(int i = 0;i <=n-1;i++)
    {
        if(v[i]==k)return 1;
    }return 0;
}
int main()
{
   // freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    for(int i = 1;i <= n;i++)
    {
        for(int j = i;j <= n;j++){
        cin >> k;
        if(f(k))
        {
            while(v[j-1]!=m)
            {
                v.pop_back();
            }
            v.pop_back();
        }
        v.push_back(m);
    }}
    for(int i = 0;i <= n-1;i++)
    {
        cnt[v[i]]++;    }
    for(int i = 1;i <= n;i++)
    {
        cout << cnt[i] << ' ';
        return 0;
    }
}
