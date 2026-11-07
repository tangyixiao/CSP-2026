#include<bits/stdc++.h>
#include<string>
using namespace std;
int c1,c2,s1,s2;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>a>>c2>>s2>>b;
	if(c1==c2){
		cout<<"1";
		if(s1==s2){
			cout<<"1";
			if(a[0]=='A'||a[0]=='B'||a[0]=='C'){
				if(b[0]=='A'||b[0]=='B'||b[0]=='C'){
					cout<<"1";
					if(a[0]=='A'&&b[0]=='B'){
						cout<<"1";
					}else if(a[0]=='B'&&b[0]=='A'){
						cout<<"1";
					}else if(a[0]=='B'&&b[0]=='C'){
						cout<<"1";
					}else if(a[0]=='C'&&b[0]=='B'){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"00";
				}
			}else{
				if(b[0]=='D'||b[0]=='F'){
					cout<<"1";
					if(a[0]=='D'&&b[0]=='F'){
						cout<<"1";
					}else if(a[0]=='F'&&b[0]=='D'){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}