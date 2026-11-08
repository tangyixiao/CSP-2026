#include<bits/stdc++.h>
using namespace std;
int main{
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1[1]==c3[1]&&c1[2]==c3[2]){
		cout<<1;
		if(c2[1]==c4[1]&&c2[2]==c4[2]){
			cout<<1;
			if(c2[3]==c4[3]){
				cout<<1;
				if(c2[3]-c4[3]==1||c4[3]-c2[3]==1){
					cout<<1;
			}
			}
		}
	} 
	return 0;
} 
