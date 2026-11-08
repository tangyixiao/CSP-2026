#include<bits/stdc++.h>
using namespace std;
struct r{
	string x,y;
};
r a,b;
bool c[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a.x>>a.y>>b.x>>b.y;
	if(a.x==b.x)c[1]=1;
	if(a.y[0]==b.y[0]&&a.y[1]==b.y[1]&&c[1])c[2]=1;
	if(((a.y[2]>'C'&&b.y[2]>'C')||(a.y[2]<='C'&&b.y[2]<='C'))&&c[1]&&c[2])c[3]=1;
	if(c[1]&&c[2]&&c[3]){
		if(a.y[2]>'C'&&b.y[2]>'C'){
			if(a.y[2]+1==b.y[2+1])c[4]=1;
		}
		else if(a.y[2]<='C'&&b.y[2]<='C'){
			if(a.y[2]=='B'||b.y[2]=='B')c[4]=1;
		}
	}
	for(int i=1;i<=4;i++){
		cout<<c[i];
	}
	return 0;
}
