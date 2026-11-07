#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool f1,f2,f3,f4;
int x1,x2,x3,x4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		f1=1;
		x1=(int)(b[0]-'0')*10+(int)(b[1]-'0');
		x3=(int)(d[0]-'0')*10+(int)(d[1]-'0');
		if(x1==x3){
			f2=1;
			x2=(int)(b[2]-'A');
			x4=(int)(d[2]-'A');
			if(x2<3&&x4<3||x2>2&&x4>2){
				f3=1;
				if(abs(x2-x4)==1) f4=1;
			}
		} 
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
