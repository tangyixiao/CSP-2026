#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.in","w",stdout);
    string a,d;
	char s[4],f[4];
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>s[i];
	}
	cin>>d;
	for(int i=1;i<=3;i++){
		cin>>f[i];
	}
	if(a!=d){
		cout<<0<<0<<0<<0;
		return 0;
	}else{
		cout<<1;
		if(s[1]==f[1]&&s[2]==f[2]){
			cout<<1;
			if(s[3]=='A'&&f[3]=='B'||s[3]=='A'&&f[3]=='C'||s[3]=='B'&&f[3]=='C'||s[3]=='B'&&f[3]=='A'||s[3]=='C'&&f[3]=='B'||s[3]=='C'&&f[3]=='A'||s[3]=='F'&&f[3]=='D'||s[3]=='D'&&f[3]=='F'){
				cout<<1;
				if(s[3]=='A'&&f[3]=='B'||s[3]=='B'&&f[3]=='A'||s[3]=='B'&&f[3]=='C'||s[3]=='C'&&f[3]=='B'||s[3]=='D'&&f[3]=='F'||s[3]=='F'&&f[3]=='D'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
				return 0;
			}
		}else{
			cout<<0<<0<<0;
			return 0;
		}
	}
	return 0;
}