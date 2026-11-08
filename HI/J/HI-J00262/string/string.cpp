#include<bits/stdc++.h>;
using namesapce std;
int n,a[i],c[i];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin<<n<<a[i]<<c[i];
	int ans;
	for(int i=1;i<=n;i++){
		if(a[i]=c[i]){
			cin<<ans;
			ans+=0;
			cout<<"0";
			break;
		}
		else if(a[i]!=c[i]){
			ans+=a[i];
		}
	}
	cout<<ans;
	return 0;
}
