#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int r,x,ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[1]==c[1]&&a[0]==c[0]){
		ans[1]=1;
		if(b[1]==d[1]&&b[0]==d[0]){
			ans[2]=1;
			if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))){
				ans[3]=1;
				r=b[2]-'A';
				x=d[2]-'A';
				if((b[2]=='D'&&d[2]=='C')||(b[2]=='C'&&d[2]=='D')){
					ans[4]=0;
				}else if((r-x==1||r-x==-1)) ans[4]=1;
			}
		} 
	} 
	for(int i=1;i<=4;i++) cout<<ans[i]; 
	return 0;
} 