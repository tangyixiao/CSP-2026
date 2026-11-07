#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	char x1,y1,z1,x2,y2,z2;
	cin>>c1>>x1>>y1>>z1>>c2>>x2>>y2>>z2;

	cout<<(c1==c2);
	bool flag=(x1==x2)&&(y1==y2)&&(c1==c2);
	cout<<flag;
	cout<<(flag&&((z1<='C'&&z2<='C')||(z1>'C'&&z2>'C')));
	if((z1=='C'&&z2=='D')||(z1=='D'&&z2=='C')){
		flag=false;
	}
	cout<<((z1==z2+1||z2==z1+1)&&flag)<<endl;
	return 0;
}
