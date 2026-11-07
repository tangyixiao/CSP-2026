#include<bits/stdc++.h>
//#define int long long
using namespace std;
int last[200005];
char C[200005];
//signed main() {
int main() {
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>last[i]>>C[i];
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(C[l]==C[r]){
			int a=min(last[l],last[r]);
			last[l]-=a;
			last[r]-=a;
		}
		else{
			int b=min(last[l],last[r]);
			ans+=b;
			last[l]-=b;
			last[r]-=b;
		}
		if(last[l]==0) l++;
		if(last[r]==0) r--;
	}
	cout<<ans;
	return 0;
}