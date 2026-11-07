#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],ans[N];
bool flaga=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flaga=0;
	}
	if(flaga==1){
		ans[n]=n;
		for(int i=n-1;i>=1;i--){
			if(a[i]==a[i+1]) ans[i]=ans[i+1];
			else ans[i]=i;
		}
		cout<<ans[1]<<" ";
		for(int i=2;i<=n;i++){
			if(ans[i]!=ans[i-1]) cout<<ans[i]<<" ";
		}
		return 0;
	}
	int x=1;
	for(int i=n-1;i>=1;i--){
		if(a[i]==a[i+1]) x++;
		if(a[i]!=a[i+1]) break;
	}
	if(a[n]==2){
		cout<<x<<" "<<n;
	}
	else{
		cout<<n<<" "<<x;
	}
	return 0;
}
