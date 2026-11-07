#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	a=(c1[0]-'0')*10+(c1[1]-'0');
	b=(c2[0]-'0')*10+(c2[1]-'0');
	if(a!=b){
		cout<<"0000";
	}
	else{
		cout<<1;
		a=(s1[0]-'0')*10+(s1[1]-'0');
		b=(s2[0]-'0')*10+(s2[1]-'0');
		if(a!=b)
			cout<<"000";
			else{
				cout<<1;
				c=(s1[2]-'A');
				d=(s2[2]-'A');
				if((c<=2&&d>=3)||(d<=3&&c>=4))
				cout<<"00";
				else{
					cout<<1;
					if((c==0&&d==2)||(d==0&&c==2))
					cout<<0;
					else
					cout<<1;
				}
			}
	}
	return 0;
} 
