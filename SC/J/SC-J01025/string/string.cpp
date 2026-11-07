#include<bits/stdc++.h>
using namespace std;
int n,a[200001],ans=0,root;
string c[200001],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++)
			s+=c[i];
	for(int i=0;i<s.size();i++) if(s[i]!=s[s.size()-1-i]) root=1;
	if(root==0){
		cout<<'0';return 0;
	}
	for(int i=0;i<=(s.size()-1)/2;i++){
		if(s[i]!=s[s.size()-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}