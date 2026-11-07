#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int a=(s1[0]-'0')*10+s1[1]-'0';
		int b=(s2[0]-'0')*10+s2[1]-'0';
		if(a==b){
			cout<<1;
			char n=s1[2],m=s2[2];
			if(n<='C'&&m<='C'){
				cout<<1;
				if(m-n==1||m-n==-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(n>='D'&&m>='D'){
				cout<<11;
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}