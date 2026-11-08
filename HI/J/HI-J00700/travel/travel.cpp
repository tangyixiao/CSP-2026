#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,a,b;
	char x,y,xx,yy;
	cin>>c>>s>>a>>b;
	int f=0,w=0,q=0,e=0;
	if(c==a){
		f=1;
	}
	if(f==1){
		string ss,bb;
		for(int i=0;i<=1;i++){
			ss+=s[i];
		}
		for(int i=0;i<=1;i++){
			bb+=b[i];
		}
		if(ss==bb){
			w=1;
		}
	}
	if(w==1){
		xx=s[2],yy=b[2];
		if(xx=='F'&&yy=='D'||xx=='D'&&yy=='F'){
			q=1;
		}
		else if((xx=='A'&&yy=='B')||(xx=='B'&&yy=='A')||(xx=='B'&&yy=='C')||(xx=='C'&&yy=='B')||(xx=='A'&&yy=='C')||(xx=='C'&&yy=='A')){
			q=1;
		}
	}
	if(q==1){
		x=s[2],y=b[2];
		if(x=='C'&&y=='D'){
			q=0;
		}
		else{
			int xx=(int)x,yy=(int)y;
			if(abs(x-y)==1){
				e=1;
			} 
		}
	}
	int sum=f+w+q+e,cnt=4-sum;
	string ans;
	for(int i=1;i<=sum;i++){
		ans+='1';
	}
	for(int i=1;i<=cnt;i++){
		ans+='0';
	}
	cout<<ans;
	return 0;
}

