#include<bits/stdc++.h>
using namespace std;
bool xl(char a,char b){
	if((a=='D'||a=='F')&&(b=='D'||b=='F'))return 1;
	if(a=='B'&&(b=='A'||b=='C'))return 1;
	if(b=='B'&&(a=='A'||a=='C'))return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<'1';
		if(c[0]==d[0]&&c[1]==d[1]){
			cout<<'1';
			if((c[2]=='A'||c[2]=='B'||c[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C') || (c[2]=='D'||c[2]=='F')&&(d[2]=='D'||d[2]=='F')){
				cout<<'1';
				if(xl(c[2],d[2])){
					cout<<'1';
				}else{
					cout<<'0';
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
