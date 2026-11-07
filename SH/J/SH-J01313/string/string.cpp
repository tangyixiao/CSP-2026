#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int main(){
	string s,re;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)s+=c[i];
	}
	for(int i=s.length()-1;i>=0;i--)re+=s[i];
	if(re==s){
		cout<<0;
		return 0;
	}
	for(int i=0;i<s.length();i++){
		int x=s.length()-i-1;
		if(x<=i)break;
		if(s[i]!=s[x])cnt+=1; 
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

