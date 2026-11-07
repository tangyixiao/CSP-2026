#include<bits/stdc++.h>
using namespace std;
int n,m,card[500005],dt[500005],x,ans;
int shuliang;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		card[i]=x;
		dt[i]=x;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			shuliang=0;
			for(int k=1;k<=n;k++){
				if(dt[k]==card[j]){
					for(int o=k;o<=n;o++){
						dt[o]=-1;
						shuliang++;
					}
					break;
				}
				
			}
			dt[n-shuliang]=card[j];
		}
		for(int j=1;j<=n;j++){
			if(dt[j]==i){
				ans++;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
