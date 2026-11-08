#include<bits/stdc++.h>
using namespace std;
string r,rr;
string x,xx;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>rr;
	cin>>x>>xx;
	if(rr[2]=='F'){
		rr[2]='E';
	}
	if(xx[2]=='F'){
		xx[2]='E';
	}
	if(r==x){
		if((rr[0]-'0')*10+(rr[1]-'0')==(xx[0]-'0')*10+(xx[1]-'0')){
			if(((rr[2]-'A')<=2&&(xx[2]-'A')<=2)||((rr[2]-'A')>2&&(xx[2]-'A')>2)){
				cout<<(rr[2]-'A')<<" "<<(xx[2]-'A')<<"\n";
				if(abs((rr[2]-'A')-(xx[2]-'A'))==1){
					cout<<"1111";
				}else{
					cout<<"1110";
					return 0;
				}
			}else{
				cout<<"1100";
				return 0;
			}
		}else{
			cout<<"1000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	
	return 0;	
} 
