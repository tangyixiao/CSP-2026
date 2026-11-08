#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,cb,sa,sb;
	cin >>ca>>sa>>cb>>sb;
	if(ca==cb){
		cout <<"1";
		if(sa[1]==sb[1] && sa[0]==sb[0]){
			cout <<"1";
			if('A'<=sa[2] && sa[2]<='C' && 'A'<=sb[2] && sb[2]<='C' || 'D'<=sa[2] && sa[2]<='F' && 'D'<=sb[2] && sb[2]<='F'){
				cout <<"1";
			}
			else{
				cout <<"0";
			}
		}
		else{
			cout <<"00";
		}
	}
	else{
		cout <<"000";
	}
	if(sa[2]+1==sb[2] && sa[2]!='D' && sb[2]!='D' && sa[1]==sb[1] && sa[0]==sb[0] || sa[2]-1==sb[2] && sa[2]!='D' && sb[2]!='D' && sa[1]==sb[1] && sa[0]==sb[0]){
		cout <<"1";
	}
	else if(sa[2]=='D' && sb[2]=='F' || sa[2]=='F' && sb[2]=='D'){
		cout <<"1";
	}
	else{
		cout <<"0";
	}
	return 0;
}
