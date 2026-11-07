#include<bits/stdc++.h>
using namespace std;
string s1,s2,a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>a1>>s2>>a2;
	if(s1==s2){
		cout<<1;
		char n,m;
		char c1=a1[0],c2=a1[1],c3=a2[0],c4=a2[1];
		int a,b;
		a=(c1-'0')+(c2-'0');
		b=(c3-'0')+(c4-'0');
//		cout<<a<<b<<endl;
		if(a==b){
			cout<<1;
			if((n>'C'&&m<='C')||(n<='C'&&m>'C')){
				cout<<0<<0;
			}else{
				cout<<1;
				if(n+1==m||n-1==m){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}else{
			cout<<0<<0<<0;
		}
		n=a1[2];
		m=a2[2];		
		
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}