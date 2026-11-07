#include <bits/stdc++.h>
using namespace std;
long long n,ans=0,num;
char ch,ch1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		ch1=ch;
		cin>>num>>ch;
	}
	if(n==1) cout<<0;
	if(n==2){
		if(ch1==ch) cout<<0;
		else cout<<1;
	}
	return 0;
}
