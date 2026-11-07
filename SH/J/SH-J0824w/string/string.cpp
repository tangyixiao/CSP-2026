#include<bits/stdc++.h>
using namespace std;
string s="";
long long ans=0;
void str(){
	long long l=s.size();
	for(long long i=0;i<l;i++){
		if(s[i]!=s[l-1-i]){
			s[i]=s[l-1-i];
			ans++;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		char c;
		cin>>n>>c;
		for(int i=1;i<=n;i++){
			s+=c;
		}
	}
	str();
	cout<<ans;
	return 0;
} 
