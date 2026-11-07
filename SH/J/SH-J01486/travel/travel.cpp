#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int x[6],v,k;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	x[b[2]-'A']=1,x[d[2]-'A']=1;
	if(a==c)cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1])cout<<1;
	else  cout<<0;
	if(a==c&&(x[0]+x[1]+x[2]==2||x[3]+x[4]==2)&&b[0]==d[0]&&b[1]==d[1])cout<<1;
	else cout<<0;
	if(a==c&&(x[0]+x[1]+x[2]==2||x[3]+x[4]==2)){
		for(int i=0;i<5;i++){
			if(x[i]==2)k=1;
		}
		if(k){	
			if((b[0]-'0')*10+b[1]-'0'==(d[0]-'0')*10+d[1]-'0')v=1;
			else v=0;
		}
		else
		{
			if((x[0]==0||x[2]==0)&&(b[0]==d[0]&&b[1]==d[1]))v=1;
			else v=0;
		}
	}
	else v=0;
	cout<<v;
}
