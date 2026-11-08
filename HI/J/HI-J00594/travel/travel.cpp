#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,x1,x2;
	cin>>s1>>s2>>x1>>x2;
	if(s1!=x1){
		cout<<"0000";
	}else if(s2[1]!=x2[1])cout<<"1000";
	else if((s2[2]>='A'&&s2[2]<='C'&&x2[2]>='D'&&x2[2]<='F')||(s2[2]>='D'&&s2[2]<='F'&&s2[2]>='A'&&x2[2]<='C'))cout<<"1100";
	else if(s2[2]+1!=x2[2]&&s2[2]-1!=x2[2])cout<<"1110";
	else cout<<"1111";
	return 0;
}
