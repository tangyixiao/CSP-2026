#include<bits/stdc++.h>
using namespace std;
int n,lh=0,k=0,ans=0;
string s,h;
int ls=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			k+=j;
			s[k]=c;
		}
		lh+=a;
	}
	
	for(int i=lh-1;i>=0;i--){
		h[i]=s[ls];
		ls++;
	}
	for(int i=0;i<lh;i++){
		if(s[i]!=h[i]){
			ans++;
		}
		else{
			break;
		}
	}
	cout<<ans;
	return 0;
}
