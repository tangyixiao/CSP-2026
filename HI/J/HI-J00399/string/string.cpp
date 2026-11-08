#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,a[100005];
	char c[100005];
	cin>>n;
	for(int i=0;i<n;i++){
		
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	
	int l=s.size();
	int p=l/2;
	int ans=0;
	for(int i=0;i<p;i++){
		if(s[i]!=s[l-i-1])ans++;
	}
	cout<<ans;
	return 0;
}

