#include <bits/stdc++.h>
using namespace std;
int main(){
 	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long a,b,d,e;
	char c,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(a==d){
		cout<<1;
		if(b==e){
			cout<<1;
			if(c=='A'&&f=='B'||c=='A'&&f=='C'||c=='B'&&f=='A'||c=='B'&&f=='C'||c=='C'&&f=='B'||c=='E'&&f=='F'||c=='C'&&f=='A'||c=='F'&&f=='E'){
				cout<<1;
				if(c=='A'&&f=='B'||c=='B'&&f=='A'||c=='B'&&f=='C'||c=='C'&&f=='B'||c=='E'||c=='F'){
					cout<<1;
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
