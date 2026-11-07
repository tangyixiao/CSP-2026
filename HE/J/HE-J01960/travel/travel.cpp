#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			if((b[2]<'D'&&d[2]<'D')||(b[2]>='D'&&d[2]>='D')){
				cout<<1;
				int x,y,q,p;
				char xx=b[0],yy=b[1],qq=d[0],pp=d[1];
				x=(int)(xx)-48;
				y=(int)(yy)-48;
				q=(int)(qq)-48;
				p=(int)(pp)-48;
				char n=b[2],m=d[2];
				y+=x*10;
				p+=q*10;
				if(abs((int)(n)-(int)(m))<=1&&abs(x-y)<=1){
					cout<<1;
				}else cout<<0;				
			}else cout<<"00";
		}else cout<<"000";
	}
	else cout<<"0000";
}
