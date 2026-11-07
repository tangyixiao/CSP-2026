#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
		if(a==c){
			ans[1]=1;	
			if(b[0]==d[0]&&b[1]==d[1]){
				ans[2]=1;
				if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='E')&&(d[2]=='D'||d[2]=='E'))){
					ans[3]=1;
					if(b[2]==d[2]+1||d[2]==b[2]+1)
						ans[4]=1;
				}
			}
		}
	string e;
	for(int i=1;i<=4;i++){
		e[i]='0'+ans[i];
		cout<<e[i];
	}
	return 0;
}