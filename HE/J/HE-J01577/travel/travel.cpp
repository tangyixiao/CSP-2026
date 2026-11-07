#include <bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout<<1;
	}
	else{cout<<0;
	}

	if(c2[0]==c4[0]){
		cout<<1;
		}
	else{
		cout<<0;}
	if(c2[1]==c4[1]){
		cout<<1;
		}
	else{
		cout<<0;}
	int h=c2[2]-32;
	int g=c4[2]-32;
	if(h-g==1||h-g==-1){
		cout<<1;
	}
	else{
		cout<<0;
	}

			
	return 0;
}
