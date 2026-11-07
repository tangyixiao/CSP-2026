#include <bits/stdc++.h>
using namespace std;
string r,x,p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>p1>>x>>p2;
	if(r[0]==x[0]&&r[1]==x[1]){
		cout<<'1';
		if(p1[1]==p2[1]&&p1[0]==p2[0]){
			cout<<'1';
			if((p1[2]=='A'&&p2[2]=='C')||(p1[2]=='C'&&p2[2]=='A')){
				cout<<"10";
			}
			else if(p1[2]-1==p2[2]||p1[2]+1==p2[2])cout<<11;
			else if((p1[2]=='D'&&p2[2]=='F')||(p1[2]=='F'&&p2[2]=='D'))cout<<11;
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
