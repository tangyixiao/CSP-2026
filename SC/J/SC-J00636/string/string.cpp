#include <bits/stdc++.h>
using namespace std;
char s[10000000]={};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int x;
	char t;
	int k=-1;
	int len=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>t;
		len+=x;
		for(int i=0;i<x;i++){
			k+=1;
			s[k]=t;
		}
	}
	int ans=0;
	for(int i=0;i<len/2;i++){
	if(s[i]!=s[len-i-1]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
