#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(m==1){
		cout<<n;
		return 0;
	}else{
		int x=0,y=0;
		for(int i=1;i<=n-1;i++){
		if(a[n-1]!=a[n]){
			x++;
			y++;
		}else if(a[n]==1&&a[n-1]==1){
			x++;
		}else if(a[n]==2&&a[n-1]==2){
			y++;
		}
		}
		if(a[n]==1) x++;
		else y++;
		cout<<x<<" "<<y;
		return 0;
	}
	return 0;
} 
