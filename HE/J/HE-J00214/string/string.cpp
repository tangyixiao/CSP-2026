#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,m=1;
char c[1000009],s[1000009],s1;
int l,r,mid,ans=-1;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>s1;
		for(int i=ans;i<=m+a;i++){
			s[i]=s1;
		}
		m+=a;
		ans+=a;
	}
	if(ans%2==0){
		cout<<ans/2;
		return 0;
	}
	else{
		l=1;r=ans;
	}
	for(int i=1;i<=n;i++){
		if(s[l]==s[r]){
			l++;r--;
			break;
		}
		else{
			ans++;l++;r--;
		}
		if(r==0||l==0){
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
