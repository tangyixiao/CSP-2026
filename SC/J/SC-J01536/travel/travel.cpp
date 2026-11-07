#include<bits/stdc++.h>
using namespace std;
string cy;
string py;
string ce;
string pe;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cy>>py>>ce>>pe;
	if(cy == ce){
		cout<<"1";
		if(py[0] == pe[0] && py[1] == pe[1]){ 
			cout<<"1";
			if(((py[2]=='D' || py[2]=='F') && (pe[2]=='D' || pe[2]=='F')) || ((py[2]=='A' || py[2]=='B' || py[2]=='C') && (pe[2]=='A' || pe[2]=='B' || pe[2]=='C'))){
				cout<<"1";
				int a = int(py[2]);
				int b = int(pe[2]);
				if(((py[2]!='D' && pe[2]!='C') || (pe[2]!='D' && py[2]!='C')) && (max(a,b) - min(a,b) == 1)) {
					cout<<"1";
					return 0;
				}
				else {
					cout<<"0";
					return 0;
				}
			} 
			else cout<<"0"<<"0";
		}
		else cout<<"0"<<"0"<<"0";		
	}
	else cout<<"0"<<"0"<<"0"<<"0";
} 