#include<bits/stdc++.h>
using namespace std;
string a,b,a1,b1;
int c[10],n,m;
int x,y;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>a1>>b1;
	if(a==a1)c[1]=1;
	else{
		cout<<"0000";
		return 0;
	}
	if(b[0]==0)n=b[1]-'0';
	else n=(b[0]-'0')*10+(b[1]-'0');

	if(b1[0]==0)m=b1[1]-'0';
	else m=(b1[0]-'0')*10+(b1[1]-'0');

	x=b[2]-'A'+1;
	y=b1[2]-'A'+1; 	
	cout<<n<<' '<<m;
	if(n==m) {
		c[2]=1;
		if((x<=3&&y<=3)||(x>3&&y>3)) {
			c[3]=1;
			if(max(x,y)-min(x,y)==1)c[4]=1;
			else c[4]=0;
		} else {
			c[3]=0;
			c[4]=0;
		}

	} else {
		c[2]=0;
		c[3]=0;
		c[4]=0;
	}for(int i=1;i<=4;i++)cout<<c[i];
	return 0;
}
