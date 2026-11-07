#include<bits/stdc++.h>
using namespace std;
long long n,l,cnt,ans;
string c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s='0';
	for(long long i=1;i<=n;i++){
		cin>>l>>c;
		for(long long j=cnt;j<cnt+l;j++){
			s+=c;
		}
		cnt+=l;
	}
	for(long long i=1;i<=cnt/2;i++){
		if(s[i]!=s[cnt-i+1]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
