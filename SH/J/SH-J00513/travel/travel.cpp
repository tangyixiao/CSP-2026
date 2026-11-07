#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c,s,cc,ss;
	int x,y,xx,yy,z,zz;
	cin>>c>>s>>cc>>ss;
	x=(c[0]-'0')*10+(c[1]-'0');
	xx=(cc[0]-'0')*10+(cc[1]-'0');
	y=(s[0]-'0')*10+(s[1]-'0');
	yy=(ss[0]-'0')*10+(ss[1]-'0');
	z=s[2]-'A';
	zz=ss[2]-'A';
	if(x==xx){
		cout<<1;
		if(y==yy){
			cout<<1;
			if(z<=2&&zz<=2||z>2&&zz>2){
				cout<<1;
				if(abs(z-zz)==1){
					cout<<1;
				}
				else{
					cout<<0;
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
