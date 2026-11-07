#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
char a[200005];
int n,l,r,b[200005],ans=0;
signed main(){
	ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i]>>a[i];
		for(int j=0;j<b[i];j++)s+=a[i];
	}
	l=0;r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r])ans++;
		l++;r--;
	}
	cout<<ans;
	return 0;
}
