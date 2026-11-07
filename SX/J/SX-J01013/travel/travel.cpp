#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	int y=0,yy=0;
	y=s/10;
	yy=ss/10;
	if(c==cc){
		cout<<"1";
	}
	else if(c!=cc){
		cout<<"0000";
		return 0;
	}
		if(y==yy){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}

	return 0;
}