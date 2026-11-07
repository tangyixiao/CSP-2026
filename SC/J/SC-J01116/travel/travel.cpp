#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int a1,b1,c1,d1,f1=0,f2=0,f3=0,f4=0,zuo1,zuo2;
	cin>>a>>b>>c>>d;
	a1=(a[1]-'0')+(a[0]-'0')*10;
	b1=(b[1]-'0')+(b[0]-'0')*10;
	c1=(c[1]-'0')+(c[0]-'0')*10;
	d1=(d[1]-'0')+(d[0]-'0')*10;
	zuo1=b[2]-'A'+1;
	zuo2=d[2]-'A'+1;
	if(a1==c1){
		f1=1;
		if(b1==d1){
			f2=1;
			if((zuo1<=3&&zuo2<=3)||(zuo1>=4&&zuo2>=4)){
				f3=1;
				if((zuo1<=3&&zuo2<=3&&abs(zuo1-zuo2)==1)||(zuo1>=4&&zuo2>=4)){
					f4=1;
				}
			}
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0; 
} 