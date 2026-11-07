#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,length = 0,ans = 0;
	cin>>n;
	for(int i = 0;i<n;i++){
		long long num;
		char c;
		cin>>num>>c;
		for(long long j = 0;j<num;j++)s+=c;
		length+=num;
	}
//	cout<<s;
	long long l = 0,r = length-1;
	while(r>l){
		if(s[r]!=s[l])ans++;
		r--,l++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0 ;
}
