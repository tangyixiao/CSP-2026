#include<bits/stdc++.h>
using namespace std;
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		string c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	} 
	long long q=s.size()-s.size()/2,q1=s.size();
	for(long long i=q;i<q1;i++){
		if(s[i]!=s[q1-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
