#include<bits/stdc++.h> 
using namespace std;
#define ll long long
string cr,sr,cx,sx;
int bj[4]={0,0,0,0};
int main() {
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if (cr==cx) bj[0]=1;
	if (sr[0]==sx[0] && sr[1]==sx[1] && bj[0]==1) bj[1]=1;
	if (((sr[2]>='A' && sr[2]<='C' && sx[2]>='A' && sx[2]<='C') || (sr[2]>='D' && sr[2]<='F' && sx[2]>='D' && sx[2]<='F')) && bj[1]==1) bj[2]=1;
	if ((sr[2]-sx[2]==1 || sr[2]-sx[2]==-1) && bj[2]==1) bj[3]=1;
	cout<<bj[0];
	cout<<bj[1];
	cout<<bj[2];
	cout<<bj[3];
	return 0;
}
