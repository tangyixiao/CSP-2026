#include <bits/stdc++.h>
using namespace std;
int f[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	string a="DF";
	bool x1=true,x2=true;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(s1[2]==a[i]) x1=false;
		if(s2[2]==a[i]) x2=false;
	}
	if(c1==c2) f[1]=1;
	if(f[1]==1&&(s1[0]==s2[0]&&s1[1]==s2[1])) f[2]=1;
	if(f[2]==1&&(x1==x2)) f[3]=1;
	if(f[3]==1&&(int(s1[2])==int(s2[2])+1||int(s2[2])==int(s1[2])+1)) f[4]=1;
	cout<<f[1]<<f[2]<<f[3]<<f[4];
	return 0;
}
