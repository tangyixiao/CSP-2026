#include<bits/stdc++.h>
using namespace std;
string x,y,x2,y2;
bool cmp(string q,string w){
	q=q[2];w=w[2];
	if((q=="F"&&w=="D")||(q=="D"&&w=="F")||((q!="D"&&q!="F")&&(w!="D"&&w!="f"))){
		return true;
	}
	return false;
}
bool cmp2(string q,string w){
	char q2=q[2],w2=w[2];
	if(abs(q2-w2)==1) return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>x2>>y2;
	int a=int(y[0]-'0')*10+int(y[1]-'0'); 
	int b=int(y2[0]-'0')*10+int(y2[1]-'0'); 
	if(x==x2) cout<<1;
	else cout<<0;
	if(a==b&&x==x2) cout<<1;
	else cout<<0;
	if(a==b&&x==x2&&cmp(y,y2)) cout<<1;
	else cout<<0;
	if(cmp2(y,y2)&&x==x2&&cmp(y,y2)&&a==b) cout<<1;
	else cout<<0;
	return 0;
}

