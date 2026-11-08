#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, a[100005];
	char b[100005];
	string m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		for(int j=0;j<a[i];j++){
			m+=b[i];
		}
	}
	string s;
	for(int i=m.size()-1;i>=0;i--){
		s+=m[i];
	}
	int ans=0;
	for(int i=0;i<m.size()/2;i++){
		if(m[i]!=s[i]) ans++;
	}
	cout<<ans;
	return 0;
}
