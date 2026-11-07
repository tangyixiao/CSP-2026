#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m=0;
	cin>>n;
	int s[n+111];
	string b[n+111];
	for(int i=1;i<=n;i++){
		cin>>s[i]>>b[i];
		if(b[i]=="a"){
			m+=0;
		}else{
			m+=s[i];
		}
	}
	cout<<m;
	return 0;
}
