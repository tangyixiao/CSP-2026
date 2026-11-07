#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n; cin>>n;
	string s="";
	while(n--){
		int a; cin>>a;
		char c; cin>>c;
		while(a--)s+=c;
	}
	string s1=s;
	reverse(s.begin(),s.end());
	if(s1==s){
		cout<<0;
		return 0;
	}
	int len=s1.size();
	long long cnt=0;
	for(int i=1;i<=len/2;++i){
		if((s[i]-s[i-1])+(s[len-i]-s[len-i-1])!=0)cnt++;
	}
	cout<<cnt;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}