#include<bits/stdc++.h>
using namespace std;
int n,t=0,ans=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=t;j<t+a;j++){
			s[j]=c;
		}
		t+=a;
	}
	int r=t-1,l=0;
	while(l!=r){
		if(s[l]!=s[r]) ans++;
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}