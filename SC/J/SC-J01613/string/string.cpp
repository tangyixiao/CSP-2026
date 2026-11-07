#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++){
		long long a;
		char x;
		cin>>a>>x;
		while(a--){
			s+=x;
		}
	}
	long long m=s.size(),sum=0,ans=0;
	long long l=0,r=m-1;
	while(sum!=m&&sum!=m-1){
		if(s[l]==s[r]){
			
		}
		else{
			ans++;
		}
		l++;
		r--;
		sum+=2;
	}
	cout<<ans;
	return 0;
}