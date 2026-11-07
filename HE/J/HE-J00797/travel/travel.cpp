#include <string>
#include <cstring> 
#include <iostream>
using namespace std;
string ca,sa,cb,sb,_sa,_sb;
bool tr[4],sd[7][7],lin[7][7];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>ca>>sa>>cb>>sb;
	memset(sd,0,sizeof(sd)),memset(lin,0,sizeof(lin));
	if(ca==cb)tr[0]=true;
	for(int i=0;i<2;i++)_sa+=(const)sa[i];
	for(int i=0;i<2;i++)_sb+=(const)sb[i];
	if(tr[0]&&_sa==_sb)tr[1]=true;
	sd[0][1]=sd[1][0]=true;
	sd[1][2]=sd[2][1]=true;
	sd[0][2]=sd[2][0]=true;
	sd[2][4]=sd[4][2]=true;
	lin[2][4]=lin[4][2]=true;
	lin[0][1]=lin[1][0]=true;
	lin[1][2]=lin[2][1]=true;
	if(tr[1]&&sd[sa[2]-'A'][sb[2]-'A'])tr[2]=true;
	if(tr[2]&&lin[sa[2]-'A'][sb[2]-'A'])tr[3]=true;
	cout<<tr[0]<<tr[1]<<tr[2]<<tr[3];
	return 0;
} 
