#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	string c,d;
	cin>>c>>a>>d>>b;
	if(c!=d){
		cout<<"0000"<<'\n';
	}else{
		cout<<1;
		if(a[1]!=b[1]){
			cout<<"000"<<'\n';
		}else{
			cout<<"1";
			if(a[2]=='D'&&b[2]=='F'){
				cout<<"11"<<'\n';
			}else{
				if(a[2]=='A'&&b[2]=='B'||a[2]=='A'&&b[2]=='C'||a[2]=='B'&&b[2]=='C'||a[2]=='C'&&b[2]=='B'||a[2]=='C'&&b[2]=='A'||a[2]=='B'&&b[2]=='A'){
					cout<<"1";
					if(a[2]=='A'&&b[2]=='B'||a[2]=='B'&&b[2]=='A'||a[2]=='B'&&b[2]=='C'||a[2]=='C'&&b[2]=='B'){
						cout<<"1"<<'\n';
					}
					
					cout<<"0"<<'\n';
				}else{
					cout<<"00"<<'\n';
				}
			}
		}
	}
	return 0;
	
}