#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int p,q,x,y;
int flag1,flag2,flag3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]=='0'){
		p=int(a[1]);
	}else{
		p=int(a[0])*10+int(a[1]);
	}
	if(c[0]=='0'){
		q=int(c[1]);
	}else{
		q=int(c[0])*10+int(c[1]);
	}
	if(b[0]=='0'){
		x=int(b[1]);
	}else{
		x=int(b[0])*10+int(b[1]);
	}
	if(d[0]=='0'){
		y=int(d[1]);
	}else{
		y=int(d[0])*10+int(d[1]);
	}
	if(p==q){
		cout<<1;
		flag1=1;
	}else{
		cout<<0;
	}
	if(x==y&&flag1==1){
		cout<<1;
		flag2=1;
	}else{
		cout<<0;
	}
	if(flag1==1&&flag2==1){
		if(b[2]<=67&&d[2]<=67){
			cout<<1;
			flag3=1;
		}else if(b[2]>67&&d[2]>67){
			cout<<1;
			flag3=1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(flag1==1&&flag2==1&&flag3==1){
		if(int(b[2])-int(d[2])==1||int(b[2])-int(d[2])==-1){
			 cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}