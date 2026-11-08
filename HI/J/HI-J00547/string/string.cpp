#include<bits/stdc++.h>

using namespace std;

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		ans+=a;
	}
	cout<<ans/2;
	
	return 0;
}
