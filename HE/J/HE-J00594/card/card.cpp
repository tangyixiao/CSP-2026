#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int a[500005],ans[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[i]=a[i];
		}
		for(int j=i;j<=n;j++){
			for(int l=j+1;l<=n;l++){
				if(b[j]==b[l]){
					for(int g=j;g<=l;g++){
						b[i]=0;
					}
					j=l;
				}
			}
		}
		for(int j=1;j<=n;j++){
			ans[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
	}
	return 0;
} 
/*
4 2
1 2 1 2
*/
