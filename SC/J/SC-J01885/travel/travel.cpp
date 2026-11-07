#include<bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
int x,y;
char m,n;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	for(int i=0;i<2;i++){
		x=x*10+int(c[i]-'0');
		y=y*10+int(d[i]-'0');
	}
	m=c[2],n=d[2];
	if(a==b){
		cout<<1;
		if(x==y){
			cout<<1;
		}else{
			cout<<"000";
			return 0;
		}
		if((m<='C' && n<='C') || (m>'C' && n>'C')){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
		if(abs(m-n)==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<"0000";
	}
	return 0;
}