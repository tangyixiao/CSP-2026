#include<bits/stdc++.h>
using namespace std;
int a,b;
bool c[5];
char a1[4],b1[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1[1]>>a1[2]>>a1[3];
	cin>>b>>b1[1]>>b1[2]>>b1[3];
	if(a==b) cout<<1;
	else{
		c[1]=1;
		cout<<0;
	}
	if(a1[1]==b1[1]&&b1[2]==a1[2]&&c[1]==0)cout<<1;
	else{
		c[2]=1;
		cout<<0;
	}
	if((a1[3]<='C'&&b1[3]<='C'||a1[3]>='D'&&b1[3]>='D')&&c[2]==0)cout<<1;
	else{
		cout<<0;
		c[3]=1;
	}
	if((a1[3]+1==b1[3]&&a1[3]!='C'||a1[3]-1==b1[3]&&a1[3]!='D')&&c[3]==0)cout<<1;
	else cout<<0;
	return 0;
}