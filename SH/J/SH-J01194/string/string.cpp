#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char c;
	char ac[2000005];
	int j1=0;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=j1;j<j1+a;j++){
			ac[j]=c;
		}
		j1+=a;
	}
	int ans=0;
	for(int i=0;i<j1/2;i++){
		if(ac[i] != ac[j1-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
