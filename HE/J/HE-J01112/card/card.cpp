#include <iostream>
using namespace std;
long long n,m,l;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int p[n+5];
	int s[m+2];
	int o[n+2];
	for(int i=1;i<=m+1;i++) s[i]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(s[p[j]]==0) s[p[j]]=j;
			else 
			{
				for(int l=1;l<=n;l++)
				{
					if(s[p[l]]<=i&&s[p[l]]>=s[p[i]])
					{
						s[p[l]]=0;
					}
				}
				s[p[j]]=j;
			}
		}
		for(int i=1;i<=n;i++) if(s[p[i]]!=0) o[p[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<o[p[i]]<<" ";
	return 0;
}
