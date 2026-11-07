#include <bits/stdc++.h> 
using namespace std;
string S,s1;
long long n,m,l;
struct inn{
	long long a;
	string c;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		l+=s[i].a;
		for(long long j=1;j<=s[i].a;j++){
			S+=s[i].c;
		}
	}
	for(int i=S.size()-1;i>=0;i--){
		s1+=S[i];
	}
	if(s1==S) cout<<0;
	return 0;
}