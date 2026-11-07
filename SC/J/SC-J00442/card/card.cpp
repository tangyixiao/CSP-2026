#include<bits/stdc++.h>
using namespace std;
int n,m,ans[500005],a[500005],ta=1,b[500005],tb=1,mtb=-1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){	
		memset(b,tb,0);
		tb=0;
		for(int j=ta;j<=n;j++){
			for(int k=1;k<=tb;k++){
				if(b[k]==a[j]){
					tb=k--;			
					break;
				}
			}
			tb++;
			b[tb]=a[j];
		}
		for(int ti=1;ti<=tb;ti++){
			ans[b[ti]]++;
			mtb=max(mtb,b[ti]);
		}
		ta++;	
	}
	for(int i=1;i<=mtb;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}