#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cc111,cc211,ss111,ss211;
	char r,x;
	cin>>cc111>>ss111>>r>>cc211>>ss211>>x;
	if(cc111==cc211){
		cout<<"1";
		if(ss111==ss211){
			cout<<"1";
			if((r=='A'&&x=='B')||(r=='B'&&x=='A'))cout<<11;
			else if((r=='C'&&x=='B')||(r=='B'&&x=='C'))cout<<11;
			else if((r=='D'&&x=='F')||(r=='F'&&x=='D'))cout<<11;
			else if((r=='C'&&x=='A')||(r=='A'&&x=='C'))cout<<10;
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
