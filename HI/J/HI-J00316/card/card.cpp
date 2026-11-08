#include<bits/stdc++.h>
using namespace std;
int a[29999999],vis[29999999];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
	{
		int j,s[3000],p=0;		
		for(j=i;j<=n;j++)
		{
			int x=0;
			for(int c=1;c<=p;c++){
				if(s[c]==a[j])
				{
					x=c;
					break;
				}
			}
			if(x==0){
				p++;
				s[p]=a[j];
			}
			else{
				for(int c=x;c<=p;c++)
				{
					s[c]=0;
				}
				p=x;
				s[p]=a[j];
			}
		}
		for(j=1;j<=p;j++)
		{
			vis[s[j]]++;
		}
	}
	for(i=1;i<=m;i++)
	{
		cout<<vis[i]<<" ";
	}
	return 0;
}
