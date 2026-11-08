#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]+b[1]==d[0]+d[1]){
			cout<<1;
			if((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C')){
				cout<<1;
				int x=b[2]-'A',y=d[2]-'A';
				if(x<y) swap(x,y);
				if((x-y==1&&x!=3)||(x==5&&y==3)) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
}

