#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt;
	string s,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cnt>>a;
		for(int i=1;i<=cnt;i++){
			s+=a;
		}
	}
	int l=s.length();
	int ans=0;
	for(int i=0,j=l-1;i<l,j>=i;i++,j--){
		if(s[i]!=s[j])ans++;
	}
	cout<<ans;
	return 0;
}
