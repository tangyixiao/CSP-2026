#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int N=5e5+10;
int a[N],tong[N];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
    	int cnt[3010]={};
    	int q[N],ct=1,head=1;
    	for(int j=i;j<=n;j++)
    	{
    		if(cnt[a[j]]%2==0)q[ct]=a[j],ct++,cnt[a[j]]++;
    		else if(cnt[a[j]]%2==1)
    		{
    			head=ct;
    			while(1)
    			{
    				j++;
    				if(cnt[a[j]]%2==0||j>n)
    				{
    					q[ct]=a[j],ct++;
    					break;
					}
    				else head=ct;
				}
			}
			for(int i=head;i<ct;i++)cout<<q[i]<<' ';
		}
		cout<<endl;
	}
    for(int i=1;i<=m;i++)cout<<tong[m]<<' ';
    return 0;
}
