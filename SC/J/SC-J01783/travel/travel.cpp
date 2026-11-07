#include <bits/stdc++.h>
using namespace std;
string c,s,c1,s1;
int a[1001];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	if(c[0]*10+c[1]==c1[0]*10+c1[1]) {
		cout<<1;
		if(s[0]*10+s[1]==s1[0]*10+s1[1]){
			cout<<1;
			if((s[2]<='C'&&s[2]>='A')&&(s1[2]<='C'&&s1[2]>='A')){
				cout<<1;
				if(abs(int(s[2]-s1[2]))==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
			else if((s[2]=='F'||s[2]=='D')&&(s1[2]=='F'||s1[2]=='D')){
				cout<<1;	
				if(s[2]=='F'&&s1[2]=='D') cout<<1;
				else if(s[2]=='D'&&s1[2]=='F') cout<<1;
				else cout<<0;
			}else {
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}