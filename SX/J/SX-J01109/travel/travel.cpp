#include<bits/stdc++.h>
using namespace std;
string a,s1,b,s2;
char c,d;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	c=s1[2];
	d=s2[2];

	if(a==b){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(c<='C'&&d<='C'||c>='D'&&d>='D'){
				cout<<1;
				if(c-d==1||c-d== -1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
   			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}