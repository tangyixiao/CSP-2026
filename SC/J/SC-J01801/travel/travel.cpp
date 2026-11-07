#include<bits/stdc++.h>
using namespace std;
string str,s,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>str;
	cin>>s;
	cin>>n;
	cin>>m;
	if(str==n){
		cout<<"1";
		if(s[0]==m[0]&&s[1]==m[1]){
			cout<<"1";
			if(s[2]<='C'&&m[2]<='C'){
				cout<<"1";
				if(s[2]!='B'&&m[2]!='B'){
					cout<<"0"<<"\n";
				}
				else cout<<"1"<<"\n";
			}
			else if(s[2]>='D'&&m[2]>='D'){
				cout<<"1";
				cout<<"1"<<"\n";
			}
			else cout<<"00"<<"\n";
		}
		else cout<<"000"<<"\n";
	}
	else cout<<"0000"<<"\n";
    return 0;
}