#include<bits/stdc++.h> 
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;char a;cin>>a>>x;for(int j=0;j<x;j++)s+=a;
	}
	
	long long len=s.size()/2,k=s.size(),cnt=0,cnt2=0;
 	for(long long i=0;i<len;i++) if(s[k-1-i]!=s[i])cnt++;
 	for(long long i=len-1;i>=0;i--) if(s[k-1-i]!=s[i])cnt2++;
 	printf("%lld",min(cnt,cnt2));
	return 0;
}