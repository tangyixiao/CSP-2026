#include<bits/stdc++.h>
using namespace std;
int a[100005];char c[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;string tot;long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			tot+=c[i];
		}
	}
	int l=tot.size();
	for(int i=0;i<l/2;i++){
		int g=l-i-1;
		if(tot[i]!=tot[g]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
