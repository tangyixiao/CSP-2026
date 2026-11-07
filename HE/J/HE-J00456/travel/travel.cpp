#include<bits/stdc++.h>
using namespace std;
string ci,cj,si,sj;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> ci >> si >> cj >> sj;
	if(ci==cj) cout << "1";
	else{
		cout << "0000";
		return 0;
	}
	int xi=0,xj=0; 
	for(int i=0;i<3;i++){
		if(i<2) xi=xi*10+int(si[i]-'0'),xj=xj*10+int(sj[i]-'0');
		else{
			if(xi==xj) cout << "1";
			else{
				cout << "000";
				return 0;
			}
			if(((si[i]=='A' && (sj[i]=='B' || sj[i]=='C')) || (si[i]=='B' && sj[i]=='C') || 
			(si[i]=='D' && sj[i]=='F')) || 
			((sj[i]=='A' && (si[i]=='B' || si[i]=='C')) || (sj[i]=='B' && si[i]=='C') || 
			(sj[i]=='D' && si[i]=='F'))) cout << "1";
			else{
				cout << "00";
				return 0;
			}
			if(((si[i]=='A' && sj[i]=='B') || (si[i]=='B' && sj[i]=='C') || 
			(si[i]=='D' && sj[i]=='F')) || 
			((sj[i]=='A' && si[i]=='B') || (sj[i]=='B' && si[i]=='C') || 
			(sj[i]=='D' && si[i]=='F'))) cout << "1";
			else{
				cout << "0";
				return 0;
			}
		}
	}
	return 0;
} 
