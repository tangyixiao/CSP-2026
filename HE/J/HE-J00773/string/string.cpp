#include<bits/stdc++.h>
using namespace std;
long long n,len,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		len+=a;
		char x;
		cin>>x;
		for(int i=1;i<=a;i++){
			s+=x;
		}
	}
	long long m=len/2;
	long long l=0,r=len-1;
	while(l<r){	
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans<<endl;
	return 0;
} 
