#include <bits/stdc++.h>
using namespace std;
char c[10000]={},d[10000]={};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a;
	for(int i=0;i<3;i++){
		cin>>c[i];
	}
	x=c[0]+c[1];
	int xb1=c[2]-'A';
	cin>>b;
	for(int j=0;j<3;j++){
		cin>>d[j];
	}
	y=d[0]+d[1];
	int xb2=d[2]-'A';
	int f1=0,f2=0,f3=0,f4=0;
	if(a==b){
		f1=1;
		if(x==y){
			f2=1;
			if((xb1<=2 && xb2<=2) || (xb1>2 && xb2>2)){
				f3=1;
				if(abs(xb1-xb2)==1){
					f4=1;
				}else{
					f4=0;
				}
			}else{
				f3=0;
			}
		}else{
			f2=0;
		}
	}else{
		f1=0;
	}
	cout<<f1<<f2<<f3<<f4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
