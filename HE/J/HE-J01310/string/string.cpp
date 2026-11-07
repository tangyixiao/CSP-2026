#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,x=0,y=0;
	long long ans=0;
	char c;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a;
		x+=a;
		cin>>c;
		for(int j=y;j<x;j++){
			s[j]=c;
			y=j+1;
		}
	}
	for(int i=0;i<x/2;i++){
		if(s[i]!=s[x-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
