#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long f=0;
	for(int i=1;i<=n;i++){
		long long a;
		char s2;
		cin>>a>>s2;
		for(long long i=1;i<=a;i++){
			f++;
			s[f]=s2;
		}
	}
	long long ans=0;
	for(long long i=1;i<=floor(f*1.0/2);i++){
		if(s[i]!=s[f-i+1]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
