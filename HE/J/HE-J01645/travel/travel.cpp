#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	int ans[4]={0,0,0,0};
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) ans[0]=1;
	else ans[0]=0;
	if(ans[0]==1){
		if(a2[0]==b2[0]&&a2[1]==b2[1]) ans[1]=1;
	    else ans[1]=0;
	}
	else ans[1]=0;
	if(ans[1]==1){
		if(a2[2]=='A'||a2[2]=='B'||a2[2]=='C'){
		if(b2[2]=='A'||b2[2]=='B'||b2[2]=='C') ans[2]=1;
		else ans[2]=0;
	}
	else{
		if(b2[2]=='E'||b2[2]=='F') ans[2]==1;
		else ans[2]==0;
	}
	}
	else ans[2]==0;
	if(ans[2]==1){
		if((a2[2]=='C'&&b2[2]=='A')||(a2[2]=='A'&&b2[2]=='C')) ans[3]=0;
		else ans[3]=1;
	}
	else ans[3]=0;
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
}
