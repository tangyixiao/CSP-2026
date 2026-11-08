#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
	int cc,bb;
	string aa,dd;
	cin>>cc>>aa>>bb>>dd;
	int ee=0,ff=0,gg=0,hh=0;
	if(cc==bb) ee=1;
	if(cc==bb&&aa[0]==dd[0]&&aa[1]==dd[1]) ff=1;
	if(aa[0]==dd[0]&&aa[1]==dd[1]&&aa[2]-dd[2]==1||dd[2]-aa[2]==1) gg=1;
	if(aa[2]=='C'&&dd[2]=='D')
		hh=0;
		else if(aa[0]==dd[0]&&aa[1]==dd[1]&&aa[2]-dd[2]==1||dd[2]-aa[2]==1)
		hh=1;
	cout<<ee<<ff<<gg<<hh;
	return 0;
}
