#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a=1,b=1,c=1,d=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		a=0;
		b=0;
		c=0;
		d=0;
	}
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			b=0;
			c=0;
			d=0;
			break;
		}
	}
	char x1=s1[2],x2=s2[2];
	if((x1<='C'&&x2>='D')||(x1>='D'&&x2<='C')){
		c=0;
		d=0;
	}
	if(abs(x1-x2)!=1) d=0;
	cout<<a<<b<<c<<d;
	return 0;
}