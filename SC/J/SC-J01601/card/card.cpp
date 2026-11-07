#include<bits/stdc++.h>
using namespace std;
long long a[500010],b[500010];
long long ans[500010]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,j=1,l=0;
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		cin>>a[i];
	}
	while(j<=n){
		for(int i = j; i <= n; i++){
			l++;
			b[l]=a[i];
			for(int i = 1; i <= l-1; i++){
				if(b[i]==b[l]){
					for(int k = i+1; k <= l; k++){
						b[k]=0;
					}
					l=i;
					break;
				}
			}
		}
		for(int i = 1; i <= l; i++){
			ans[b[i]]++;
		}
		for(int i = 1; i <= l; i++){
			b[i]=0;
		}
		j++;
		l=0;
	}
	for(int i = 1; i <= m; i++){
		if(ans[i]!=0){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}