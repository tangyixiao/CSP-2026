#include<bits/stdc++.h>
using namespace std;
int n,a[200005];char c[200005];long long xx;string x,y;int ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		int yu=a[i];
		for(int j=1;j<=yu;j++){
			xx++;
			x[xx]=c[i];
		}	
	}
	//for(int i=1;i<=xx;i++)cout<<x[i];
	for(int i=1;i<=xx/2;i++){
		if(x[i]!=x[xx-i]){
			x[i]=x[xx-i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}