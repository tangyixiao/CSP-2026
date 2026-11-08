#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int n,m;
vector<int> a;
map<int,int> cnt;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        vector<int> b;
        for(int j=i;j<n;j++)
        {
            int x=lower_bound(b.begin(),b.end(),a[j])-b.begin();
            if(x>b.size())
            {
                for(int k=x;k<n;k++)
                {
                    b.pop_back();
                }
                b.push_back(a[j]);
            }else{
                b.push_back(a[j]);
            }
        }
        map<int,bool> f;
        for(int j=0;j<b.size();j++)
        {
            // cout<<b[j]<<" ";
            if(f[b[j]]==0)
            {
                cnt[b[j]]++;
                f[b[j]]=1;
            }
        }
        // cout<<"\n";
    }
    for(int i=0;i<m;i++)
    {
        cout<<cnt[i]<<" ";
    }
    return 0;
}
