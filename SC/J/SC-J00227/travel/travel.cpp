#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int a1,a2,b1,b2;
bool f(char x){
	if(x=='D'||x=='F')return 0;
	else return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	a1=(a[0]-'0')*10+(a[1]-'0');
	a2=(b[0]-'0')*10+(b[1]-'0');
	b1=(c[0]-'0')*10+(c[1]-'0');
	b2=(d[0]-'0')*10+(d[1]-'0');
	if(a1==b1){
		cout<<"1";
		if(a2==b2){
			cout<<"1";
			if(f(b[2])==f(d[2])){
				cout<<1;
				if(f(b[2])==0)cout<<"1";
				else {
					if(b[2]=='B'||d[2]=='B')cout<<"1";
					else cout<<"0";
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}