#include<bits/stdc++.h>
using namespace std;

string s;
long long n,a;
long long ans;
char c;
long long is(string s){
	for(long long i=0;i<=s.size()/2-1;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	return ans;
}

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
	cout<<is(s); 
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
