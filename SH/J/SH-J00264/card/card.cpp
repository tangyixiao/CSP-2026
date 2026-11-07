#include<bits/stdc++.h>
using namespace std;

int m,n,cnt[3005],desk[3005],rt=1,a[5005];

int main()
{ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++)   
	{
		for(int j=0;j<=3000;j++) desk[j]=0;
		for(int j=i;j<n;j++)
		{
			if(desk[a[j]]==0)
			{
				desk[a[j]]=rt;
				rt++;
			}else{
				int temp=rt;
				rt=desk[a[j]];
				for(int p=0;p<temp;p++)
				{
					if(desk[a[p]]>=rt) desk[a[p]]=0;
				}
				desk[a[j]]=rt;
				rt++;
			}
		}
		for(int j=0;j<=3000;j++) if(desk[j]!=0)
			cnt[j]++;
	}
	for(int i=1;i<=m;i++)
		cout << cnt[i] << ' ';
	
	return 0;
}
