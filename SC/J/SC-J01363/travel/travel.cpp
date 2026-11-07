#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,sr,cx,sx;
	cin>>cr>>sr>>cx>>sx;
	cout<<(cr==cx)<<\
	(cr==cx&&sr[0]==sx[0]&&sr[1]==sx[1])<<\
	(cr==cx&&sr[0]==sx[0]&&sr[1]==sx[1]&&\
	(sr[2]<='C'&&sx[2]<='C')||(sr[2]>'C'&&sx[2]>'C'))<<\
	(cr==cx&&sr[0]==sx[0]&&sr[1]==sx[1]&&\
	((sr[2]<='C'&&sx[2]<='C')||(sr[2]>'C'&&sx[2]>'C'))&&\
	(sr[2]-sx[2]==1||sx[2]-sr[2]==1));
	return 0;
}