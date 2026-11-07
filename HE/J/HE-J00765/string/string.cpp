#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	int a;
	char c;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	int ans=0;
	n=s.size();
	for(int i=0;i<=n/2-1;i++){
		if(s[i]!=s[n-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
