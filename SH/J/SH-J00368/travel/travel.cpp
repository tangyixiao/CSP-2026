#include <bits/stdc++.h>
using namespace std;

bool res[4];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		res[0]=1;
		if(a2.substr(0,2)==b2.substr(0,2)){
			res[1]=1;
			switch(a2[2]){
				case 'A':{
					if(b2[2]=='B'){
						res[2]=1;
						res[3]=1;
					}else if(b2[2]=='C'){
						res[2]=1;
						res[3]=0;
					}
					break;
				}case 'B':{
					if(b2[2]=='A'||b2[2]=='C'){
						res[2]=1;
						res[3]=1;
					}
					break;
				}case 'C':{
					if(b2[2]=='B'){
						res[2]=1;
						res[3]=1;
					}else if(b2[2]=='A'){
						res[2]=1;
						res[3]=0;
					}
					break;
				}case 'D':{
					if(b2[2]=='F') res[2]=1,res[3]=1;
					break;
				}case 'F':{
					if(b2[2]=='D') res[2]=1,res[3]=1;	
					break;
				}
			}
		}
	}
	for(int i=0;i<4;i++) cout<<res[i];
	cout<<"\n";
	return 0;
}
