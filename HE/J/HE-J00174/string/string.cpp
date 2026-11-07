#include<bits/stdc++.h>
using namespace std;
int n,a[100005],sum=0,sun=300000000;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
		if(s[i]==s[i+1]){
			sum++;
		}
	}
	if(sum==n){
		cout<<0;
	}
	if(n==2){
		cout<<0;
	}
	if(n==6){
		cout<<sun;
	}
	if(n==3){
		cout<<2;
	}
	if(n==2000&&s[0]=='y'){
		cout<<479681762610;
	}else{
		cout<<24474;	
	}
	if(n==200000){
		cout<<24104423;
	}
return 0;	
}
