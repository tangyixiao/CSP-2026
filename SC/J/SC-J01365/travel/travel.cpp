#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool ok[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		ok[1]=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			ok[2]=1;
			
			if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='C')||(b[2]=='A'&&d[2]=='C')||(b[2]=='B'&&d[2]=='A')||(b[2]=='C'&&d[2]=='B')||(b[2]=='C'&&d[2]=='A')||(b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')){
				ok[3]=1;
				if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')||(b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')) ok[4]=1;
				else ok[4]=0;
					
				
			}
			else ok[3]=0,ok[4]=0;
			
		}
		else ok[2]=0,ok[3]=0,ok[4]=0;
	}
	else ok[1]=0,ok[2]=0,ok[3]=0,ok[4]=0;
	for(int i=1;i<=4;i++){
		cout<<ok[i];
	}
	
	return 0;
	
}
