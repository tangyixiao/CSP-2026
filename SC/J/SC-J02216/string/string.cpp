#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
ll n,x[N],ans;
string s;
char a[N];
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(a[l]==a[r]){
			if(x[l]<x[r])x[r]-=x[l],l++;
			else x[l]-=x[r],r--;
		}else{
			if(x[l]<x[r])x[r]-=x[l],ans+=x[l],l++;
			else x[l]-=x[r],ans+=x[r],r--;
		}
	}
	cout<<ans;
	return 0;
}