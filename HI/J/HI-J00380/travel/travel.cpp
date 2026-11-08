#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans=0;
	if(c1==c2&&c1!="01"&&c1!="16"&&c2!="01"&&c2!="16"){
		ans=1000;
		int x=s1[0]+s1[1],y=s2[0]+s2[1];
		if(x==y){
			ans=1100;
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
				ans=1110;
			else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))
				ans=1111;
		}
		if(ans==1110){
			if((s1[2]=='A'||s1[2]=='B')&&(s2[2]=='A'||s2[2]=='B'))
				ans=1111;
			else if((s1[2]=='B'||s1[2]=='C')&&(s2[2]=='B'||s2[2]=='C'))
				ans=1111;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	cout<<ans;
	return 0;
}

