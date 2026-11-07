#include<bits/stdc++.h>
using namespace std;
long long n,a,b,e,f,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>c;
		b+=a;
		for(long long j=0;j<a;j++) s+=c;
	}
	e=b/2;
	f=e+1;
	if(b%2!=0) f++;
	for(long long i=0;e>=0;i++){
		if(s[e-1]!=s[f-1]){
			ans++;
		} 
		e--;
		f++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
