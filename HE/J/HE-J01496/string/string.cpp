#include<bits/stdc++.h>
using namespace std;
long long s[100000];
string s1;
string s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,b=0,di=0;
	long long z=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long m;
		char m1;
		cin>>m>>m1;
		s[i]=m;
		s1[i]=m1;
		z+=m;
		if(s1[i-1]-'a'!=s1[i]-'a'){
			b=1;
		}
		for(int y=1;y<=m;y++){
			s2[di+y]=m1;
		}
	} 
	if(n==1 || b==0){
		cout<<0;
		return 0;
	}
	for(int i=z/2;i>=1;i--){
		if(s2[i]-'a'!=s2[z-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
