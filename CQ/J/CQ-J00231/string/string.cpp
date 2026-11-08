#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,l=0,r=-1;
string s;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long q;cin>>q;char p;cin>>p;
		for(long long j=1;j<=q;j++) s=s+p;
		r+=q;
	}
	long long len=r+1;
	if(len%2==0){
		while(l<=r){
			if(s[l]!=s[r]) ans++;
			l++;r--;
		}
	}else{
		while(l!=r){
			if(s[l]!=s[r]) ans++;
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}

