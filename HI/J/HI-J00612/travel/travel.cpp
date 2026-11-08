#include<bits/stdc++.h>
using namespace std;
int o[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int p,q,s,t;
	p=a[0]-'0';
	q=a[1]-'0';
	s=c[0]-'0';
	t=c[1]-'0';
	p=p*10+q;
	s=s*10+t;
	if (p<=17&&p>=1&&s<=17&&p>=1) {
		if (a==c){
			o[1]=1;
			if (b[0]==d[0]&&b[1]==d[1]){
				o[2]=1;
				char x=b[2],y=d[2];
				if (x=='F'&&y=='D'){
					o[3]=1;
					o[4]=1;
				}
				else if (x=='D'&&y=='F'){
					o[3]=1;
					o[4]=1;
				}
				else if (x=='A'&&y=='B'){
					o[3]=1;
					o[4]=1;
				}
				else if (x=='A'&&y=='C'){
					o[3]=1;
					o[4]=0;
				}
				else if (x=='B'&&y=='A'){
					o[3]=1;
					o[4]=1;
				}
				else if (x=='B'&&y=='C'){
					o[3]=1;
					o[4]=1;
				}
				else if (x=='C'&&y=='A'){
					o[3]=1;
					o[4]=0;
				}
				else if (x=='C'&&y=='B'){
					o[3]=1;
					o[4]=1;
				}
				else {
					o[3]=0;
					o[4]=0;
				}
			}
			else {
				o[2]=1;
				o[3]=1;
				o[4]=1; 
			}
			
		}
		else {
			o[1]=1;
			o[2]=1;
			o[3]=1;
			o[4]=1;
		}
			
	}
	else {
		o[1]=1;
		o[2]=1;
		o[3]=1;
		o[4]=1;
	}
	for(int i=1;i<=4;i++)cout<<o[i];
	return 0;
}
