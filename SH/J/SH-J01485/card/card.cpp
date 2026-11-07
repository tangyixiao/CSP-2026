#include<bits/stdc++.h>
using namespace std;

freopen("card.in","r",stdin);
freopen("card.out","l",stdout);
int q[1000000];
int p[1000000];
int cnt[1000000];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i <=n;i++)
    {

        cin >> q[i];


    }
	for(int i=1;i <=n;i++)
	{
		for(int j=i;j <=n;j++)
		{
			if(cnt[q[j]]==0)
            {
                p[j]=q[j];
                cnt[q[j]]++;
            }
            else{
                    p[j]=q[j];
                for(int k=i;k<j;k++)
                {

                    cnt[p[k]]=0;
                }

            }
		}
		for(int i=1;i <=n;i++)
        {

            cout << p[i]<<" ";

        }
        cout <<endl;
	}



}

