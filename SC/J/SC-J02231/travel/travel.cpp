#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){//不在同一节车厢
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(s1[0]!=s2[0]||s1[1]!=s2[1]){//判断是否在同一排
			cout<<"000";
		}
		else{
			cout<<"1";
			if(!((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))){//是否在同一侧
				cout<<"00";
			}
			else{
				cout<<"1";
				if(abs(s1[2]-s2[2])==1)cout<<"1";
				else cout<<"0";
			}
		}
	}
}