#include<bits/stdc++.h>
using namespace std;
char cr[4],sr[4],cx[4],sx[4];
int c,s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	c=sr[2]-'A';
	s=sx[2]-'A';
	if(c==3) c=4;
	if(s==3) s=4;
	if(cr[0]==cx[0]&&cr[1]==cx[1]){
		cout<<1;
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout<<1;
			if((c<=3&&s<=3)||(c>=5&&s>=5)){
				cout<<1;
				if(abs(c-s)==1) cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
