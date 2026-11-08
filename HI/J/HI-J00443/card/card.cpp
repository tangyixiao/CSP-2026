#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int c[500005],card[500005];
int msum[300005],o[300005];
signed main()
{

//    freopen("card1.in","r",stdin);
//    freopen("card1.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>card[i];
        c[card[i]]++;
    }
    int x=1;
    while(x<=n)
    {
        int rs=x,r=x;
        while(r<=n)
        {
        	
            o[card[rs]]+=c[card[r]];
            while(o[rs])
            {
			r++;
                if(card[r]==card[rs])
                {
                    o[card[rs]]--;
                }
                else
                {
                    o[card[r]]--;
                }
                

            }
            msum[rs-1]++;
            rs=r;
        }
        cout<<endl;
        c[card[x]]--;
        x++;
    }
    for(int i=1; i<=m; i++)
    {
        cout<<msum[i]<<" ";
    }

    return 0;
}
