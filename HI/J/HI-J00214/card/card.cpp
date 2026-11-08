#include<bits/stdc++.h>
using namespace std;
long long n,m;
int in[300005];
int mn[300005];
int num[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>in[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			mn[j]=0;
		}
		for(int j=i;j<=n;j++){
			mn[in[j]]++;
			if(mn[in[j]]==2){
				for(int k=j;k>=i;k--){
					mn[in[k]]--;
				}
			}
		}
		for(int j=1;j<=m;j++){
			num[j]+=mn[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
