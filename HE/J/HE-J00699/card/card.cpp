#include<bits/stdc++.h>
using namespace std;
int a[501000],ans[501000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int l=a[i];
		int js=i;
		while(js<=n){
			
			for(int j=n;j>=i;j--){
			if(l==a[j]){
				ans[l]++;
				l=a[j+1];
				js=j+1;
				break;
			}
		}
	}
		
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
