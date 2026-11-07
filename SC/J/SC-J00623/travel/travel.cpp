#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<endl;//chexiang
		return 0;
	}else if((s1[0]!=s2[0])||(s1[1]!=s2[1])){//paishu
		cout<<"1000"<<endl;
		return 0;
	}else if((s1[2]>'C'&&s2[2]>'C')){
		cout<<"1111"<<endl;
	}else if((s1[2]<'D'&&s2[2]<'D')){
		if(s1[2]=='B'||s2[2]=='B'){
			cout<<"1111"<<endl;
			return 0;
		}else{
			cout<<"1110"<<endl;
			return 0;
		}
	}else{
		cout<<"1100"<<endl;
	}
	return 0;
}