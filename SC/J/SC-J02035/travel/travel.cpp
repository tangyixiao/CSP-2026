#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a=s1.size();
	int m=s2.size();
	bool flag=0;
	if (c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0";
		flag=1;
	}
	for (int i=0;i<2;i++){
		if (s1[i]!=s2[i]){
			flag=1;
		}
	}
	if (flag==0){
		cout<<1;
		if ((s1[2]>='A' && s1[2]<='B') && s2[2]<='B'){
			cout<<"11";
		}
		if ((s1[2]>='B' && s1[2]<='C') && (s2[2]<='C' && s2[2]>='B')){
			cout<<"11";
		}
		if (s1[2]>='D' && s2[2]<='F'){
			cout<<"11";
		}
		if ((s1[2]>='A' && s1[2]<='C') && s2[2]>='D'){
			cout<<"00";
		}
		if ((s1[2]=='A' || s2[2]=='A') && (s1[2]=='C' || s2[2]=='A')){
			cout<<"10";
		}
	}
	else{
		cout<<"000";
	}
	return 0;
}