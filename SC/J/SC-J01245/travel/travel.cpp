#include<bits/stdc++.h>
using namespace std;
int a1,a2;
int n1,n2;
string s1,s2;
char n,m;
bool k1,k2,k3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>a1>>s1;
	cin>>a2>>s2;
	n=s1[2];
	m=s2[2];
//	cout<<a1<<' '<<a2;
	if(a1==a2){
		k1=1;
		cout<<1;
	}else{
		cout<<0;
	}
	if(k1==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		k2=1;
		cout<<1;
	}else{
		cout<<0;
	}
	if(k2==1&& (n<='C'&&n>='A'&&m<='C'&&m>='A')  ||  (n<='F'&&n>='D'&&m<='F'&&m>='D')){  
		k3=1;
		cout<<1;
	}else{
		cout<<0;
	}
	if(k3==0){
		cout<<0;
		return 0;
	}
	if(k3==1){
		if((n<='C'&&n>='A'&&m<='C'&&m>='A'&&n==m+1||n==m-1)||(n<='F'&&n>='D'&&m<='F'&&m>='D'&&n==m+1||n==m-1)){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	return 0;
}