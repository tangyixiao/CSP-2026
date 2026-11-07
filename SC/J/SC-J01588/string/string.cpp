#include <bits/stdc++.h>
using namespace std;
string o;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	int a[200005];
	char c[200005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			o+=c[i];
		}
	}
	int ans=0;
	for(int i=0;i<=o.size()/2;i++){
		if(o[i]!=o[o.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}