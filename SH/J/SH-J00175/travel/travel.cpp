#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	int C1=int(s1[2]-'A');
	int C2=int(s2[2]-'A');
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		exit(0);
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		exit(0);
	}
	
	if((C1>=0&&C1<=2&&C2>=0&&C2<=2)||(C1>=3&&C1<=4&&C2>=3&&C2<=4)){
		cout<<1;
	}
	else{
		cout<<"00";
		exit(0);
	}
	
	int Near=max(C1,C2)-min(C1,C2);
	if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
		cout<<0;
	}
	else if(Near==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
