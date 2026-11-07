#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char k1,k2;
	int c1,s1,c2,s2;
	cin>>c1>>s1>>k1>>c2>>s2>>k2;
	int d1=k1-'A',d2=k2-'A';
	if(c1==c2){
		if(s1==s2){
			if(d1==0&&d2==1) cout<<"1111";
			else if(d1==0&&d2==2) cout<<"1110";
			else if(d1==0&&d2==3) cout<<"1100";
			else if(d1==0&&d2==5) cout<<"1100";
			else if(d1==1&&d2==0) cout<<"1111";
			else if(d1==1&&d2==2) cout<<"1111";
			else if(d1==1&&d2==3) cout<<"1100";
			else if(d1==1&&d2==5) cout<<"1100";
			else if(d1==2&&d2==0) cout<<"1110";
			else if(d1==2&&d2==1) cout<<"1111";
			else if(d1==2&&d2==3) cout<<"1100";
			else if(d1==2&&d2==5) cout<<"1100";
			else if(d1==3&&d2==0) cout<<"1100";
			else if(d1==3&&d2==1) cout<<"1100";
			else if(d1==3&&d2==2) cout<<"1100";
			else if(d1==3&&d2==5) cout<<"1111";
			else if(d1==5&&d2==0) cout<<"1100";
			else if(d1==5&&d2==1) cout<<"1100";
			else if(d1==5&&d2==2) cout<<"1100";
			else if(d1==5&&d2==3) cout<<"1111";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}
