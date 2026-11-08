#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,m1,m2;
	cin>>r1>>r2>>m1>>m2;
	if(r1==m1){
		cout<<"1";
		for(int i=0;i<2;i++){
			if(r2[i]!=m2[i]){
				cout<<"000";
				return 0;
			}
		}
		cout<<"1";
		if((r2[2]<'D' && m2[2]<'D') || (r2[2]>='D' && m2[2]>='D')){
			cout<<"1";
			if(r2[2]-m2[2]==1 || m2[2]-r2[2]==1){
				cout<<"1";
				return 0;
			}
			else{
				cout<<"0";
				return 0;
			}
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 
