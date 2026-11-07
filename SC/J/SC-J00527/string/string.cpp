#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,a[N],ans;
string c[N];
int add(int u,int k){
	if(u==k)return ans;
	if(c[u]==c[k]){
		if(a[u]>=a[k]){
			a[u]-=a[k];
			add(u,k-1);
		}
		else {
			a[k]-=a[u];
			add(u+1,k);
		}
	}
	else {
		if(a[u]>=a[k]){
			ans+=a[k];
			a[u]-=a[k];
			add(u,k-1);
		}
		else {
			ans+=a[u];
			a[k]-=a[u];
			add(u+1,k);
		}
	}
	return ans;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	cout<<add(1,n);
	return 0;
} 