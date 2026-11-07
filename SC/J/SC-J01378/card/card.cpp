#include<bits/stdc++.h>
using namespace std;
int a[500005],n,m,y[500005],x[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]==a[i]){
				y[i]=j-i;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(y[j]!=0){
				j+=y[j];
			}
			else{
				x[a[j]]++;
				j++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}