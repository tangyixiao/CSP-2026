#include<bits/stdc++.h>
using namespace std;
string cx1,zw1,cx2,zw2;
bool tcx,tp,tc,xl;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1==cx2) tcx=true;
	else tcx=false;
	//同车厢 
	if(zw1[0]==zw2[0]&&zw1[1]==zw2[1]&&tcx) tp=true;
	else tp=false;
	//同排 
	if(zw1[2]<='C'&&zw1[2]>='A'&&zw2[2]<='C'&&zw2[2]>='A'&&tp) tc=true;
	else if(zw1[2]<='E'&&zw1[2]>='D'&&zw2[2]<='E'&&zw2[2]>='D'&&tp) tc=true;
	else tc=false;
	//同侧 
	if(zw1[2]=='A'&&zw2[2]=='B'&&tc||zw2[2]=='A'&&zw1[2]=='B'&&tc) xl=true;
	else if(zw1[2]=='B'&&zw2[2]=='C'&&tc||zw2[2]=='C'&&zw1[2]=='B'&&tc) xl=true;
	else if(zw1[2]=='D'&&zw2[2]=='E'&&tc||zw2[2]=='E'&&zw1[2]=='D'&&tc) xl=true;
	else xl=false;
	//相邻
	if(xl){
		cout<<"1111";
	}else{
		if(tc) cout<<"1110";
		else{
			if(tp) cout<<"1100";
			else{
				if(tcx) cout<<"1000";
				else cout<<"0000";
			}
		}
	}
	return 0;
}
