#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);//A==65,B==66,C==67,D==68,E==69;
	string a,a1,b,b1;
	cin>>a>>a1>>b>>b1;
    if(a[0]==b[0]&&a[1]==b[1]) cout<<"1";
	else {cout<<"0000"; return 0;}
	if(a1[0]==b1[0]&&a1[1]==b1[1]) cout<<"1";
	else {cout<<"000"; return 0;}
	if((int)a1[2]<=67&&(int)a1[2]>=65&&(int)b1[2]<=67&&(int)a1[2]>=65){
		cout<<"1";
	}else{if((int)a1[2]<=69&&(int)a1[2]>=68&&(int)b1[2]<=69&&(int)b1[2]>=68){
          cout<<"1";
	     }else{
	     	cout<<"00";return 0;
		 }
	}
	if((int)a1[2]-(int)b1[2]==1||(int)b1[2]-(int)a1[2]==1){cout<<"1";}
	else{cout<<"0";
	}
	return 0;
}