#include<bits/stdc++.h>
using namespace std;

int mc,nc;
int mr,nr;
char mcol,ncol;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>mc>>mr>>mcol;
	cin>>nc>>nr>>ncol;
	if(mc!=nc){
		cout<<"0000";
		return 0;
	}
	else if(mr!=nr){
		cout<<"1000";
	}
	else if((mcol=='A'&&ncol!='B'&&ncol!='C')||
			(mcol=='B'&&ncol!='A'&&ncol!='C')||
			(mcol=='C'&&ncol!='A'&&ncol!='B')||
			(mcol=='D'&&ncol!='E'||mcol=='E'&&ncol!='D')){
				cout<<"1100";
			}
	else if((mcol=='A'&&ncol!='B')||
			(mcol=='B'&&ncol!='A'&&ncol!='C')||
			(mcol=='C'&&ncol!='B')||
			(mcol=='D'&&ncol!='E')||
			(mcol=='E'&&ncol!='D')){
				cout<<"1110";
			}
	else{
		cout<<"1111";
	}
	fclose(stdin);
	fclose(stdout);
} 
