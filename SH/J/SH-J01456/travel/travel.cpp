#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>s1>>s2>>c1>>c2;
	if(s1==c1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s2[0]==c2[0]&&s2[1]==c2[1]&&s1==c1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int n1=s2[2]-'A'+1;
	int n2=c2[2]-'A'+1;
	if(((n1<=3&&n2<=3)||(n1>=4&&n2>=4))&&(s2[0]==c2[0]&&s2[1]==c2[1]&&s1==c1)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((abs(n1-n2)==1&&((n1!=3&&n2!=4)&&(n1!=4&&n2!=3)))&&(s2[0]==c2[0]&&s2[1]==c2[1]&&s1==c1)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
