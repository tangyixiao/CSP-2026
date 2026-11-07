#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1>>r2>>x1>>x2;
	int b=1;
	for(int i=0;i<3;i++){
		if(r1[i]!=x1[i]){
			b=0;
			break;
		}
	}
	if(b==0){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<b;
	}
	b=0;
	if(r2[0]==x2[0]&&r2[1]==x2[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(abs(r2[2]-x2[2])<3){
		if(abs(r2[2]-x2[2])<2){
			cout<<"11";
		}
		else{
			cout<<"10";
		}
	}
	else{
		cout<<"00";
	}
	return 0;
}
