#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b,c,d;
bool check(char c){
	return c<='C';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]!=d[0]||b[1]!=d[1]){
			cout<<"000";	
		}else{
			cout<<1;
			if(check(b[2])!=check(d[2])){
				cout<<"00";
			}else{
				cout<<1;
				if((b[2]=='A'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A')){
					cout<<0;
				}else cout<<1;
			}
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}