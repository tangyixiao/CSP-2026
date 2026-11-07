#include<bits/stdc++.h>
using namespace std;
int r,x;
string sr,sx; 
bool flag=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>r>>sr>>x>>sx;
	if(sr[2]=='F')sr[2]='E';
	if(sx[2]=='F')sx[2]='E';
	flag&=(r==x);
	cout<<flag;
	flag&=((sr[0]==sx[0])&&(sr[1]==sx[1]));
	cout<<flag;
	flag&=((sr[2]>'C'&&sx[2]>'C')||(sr[2]<'D'&&sx[2]<'D'));
	cout<<flag;
	flag&=(abs(sr[2]-sx[2])==1);
	cout<<flag;
	return 0;
}
