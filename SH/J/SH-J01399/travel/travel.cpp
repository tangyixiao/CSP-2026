#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2)cout<<1;
	else cout<<0;
	if(a1==a2&&b1[0]==b2[0]&&b1[1]==b2[1])cout<<1;
	else cout<<0;
	int left=0,right=0;
	if(a1==a2&&b1[2]=='A'||b1[2]=='B'||b1[2]=='C')left++;
	else right++;
	if(a1==a2&&b2[2]=='A'||b2[2]=='B'||b2[2]=='C')left++;
	else right++;
	if(a1==a2&&b1[0]==b2[0]&&b1[1]==b2[1]&&(left==2||right==2))cout<<1;
	else cout<<0;
	if(a1==a2&&b1[0]==b2[0]&&b1[1]==b2[1]&&(left==2||right==2)){
		if(right==2){
			cout<<1;
		}
		else{
			if((b1[2]=='A'&&b2[2]=='C')||(b1[2]=='C'&&b2[2]=='A'))cout<<0;
			else cout<<1;
		}
	}
	else cout<<0;
	
	
	return 0;
}
