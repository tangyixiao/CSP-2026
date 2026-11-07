#include<bits/stdc++.h>
using namespace std;
long long l,n,mid,ans=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long j=0;j<a;j++){
			s+=c;
		}
	}	
	l=s.size();
	mid=l/2+1;
	for(long long i=0;i<mid;i++){
		if(s[i]!=s[l-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
