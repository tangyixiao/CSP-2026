#include<bits/stdc++.h>
using namespace std;
long long a,n,ans;
string s;
char c;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<(s.size()+1)/2;i++){
		if(s[i]==s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
