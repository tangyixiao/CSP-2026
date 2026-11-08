#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int k1,k2,r1,r2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<=1;i++){
		k1=k1*10+s1[i]-'0';
		r1=r1*10+s2[i]-'0'; 
		k2=k2*10+s3[i]-'0';
		r2=r2*10+s4[i]-'0';
	}
	c1=s2[2]-'A'+1,c2=s4[2]-'A'+1;
	if(c1==6) c1--;
	if(c2==6) c2--;
	if(k1!=k2) cout<<"0000";
	else if(r1!=r2) cout<<"1000";
	else if((c1<=3 && c2>3) || (c1>3 && c2<=3)) cout<<"1100";
	else if(abs(c1-c2)!=1) cout<<"1110";
	else cout<<"1111"; 
	return 0;
} 
