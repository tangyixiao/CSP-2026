#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,sr,cx,sx;
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	int rxx=10*(sr[0]-'0')+sr[1]-'0',yxx=10*(sx[0]-'0')+sx[1]-'0';
	if(rxx!=yxx){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	bool rrr=(sr[2]<='C');
	bool xxx=(sx[2]<='C');
	if(((rrr+xxx)%2)){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	cout<<(abs(sr[2]-sx[2])==1);
	return 0;
}