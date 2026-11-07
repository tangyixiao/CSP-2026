#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	string s="0";
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		char c;
		cin>>c;
		while(a--){
			s+=c;
		}
	}
	
	for(int i=1;i<(1+s.size())/2;i++){
		if(s[i]!=s[s.size()-i])ans++;
	}
	cout<<ans<<endl;
	return 0;
}
