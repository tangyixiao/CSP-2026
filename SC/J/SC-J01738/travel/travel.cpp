#include<bits/stdc++.h>
using namespace std;

int ans[10];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string Rc,Rs,Xc,Xs;
	cin>>Rc>>Rs>>Xc>>Xs;
	string lnr=Rs.substr(0,2),lnx=Xs.substr(0,2);
	char idr=Rs[2],idx=Xs[2];
	if(Rc==Xc) ans[1]=1;
	if(lnr==lnx&&ans[1]) ans[2]=1;
	if(ans[2]==0||idr=='D'&&idx!='F'||idr=='F'&&idx!='D'||idx=='D'&&idr!='F'||idx=='F'&&idr!='D') ans[3]=0;
	else ans[3]=1;
	if(ans[3]==0||idr=='A'&&idx=='C'||idr=='C'&&idx=='A') ans[4]=0;
	else ans[4]=1;
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}