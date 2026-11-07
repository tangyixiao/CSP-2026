#include<bits/stdc++.h>
using namespace std;
long long n,ans,c;
string s,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		string b;
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
			c++;
		}
	}
	for(int i=c-1,j=0;i>=c/2;i--,j++){
		if(s[j]!=s[i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}