#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+1];
	vector<string> c(n+1);
	int L=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		L+=a[i];
	}
	vector<string> b;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			b.push_back(c[i]);
		}
	}
	int ans=0;
	for(int i=0;i<L/2;i++){
		if(b[i]!=b[L-1-i]){
			ans++;
		}
	}
	cout<<ans;
}