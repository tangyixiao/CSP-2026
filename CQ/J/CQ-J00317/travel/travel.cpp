#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +5;
int n;
int main()
{
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout); 
	string c1_1,c2_1;
	int c1=0,c2=0;
	string s1_1 ,s2_1;
	int s1=0,s2=0,s1_2=0,s2_2=0; 
	string ans="0000";
	cin>>c1_1>>s1_1>>c2_1>>s2_1;
	c1=(c1_1[0]-'0')*10+(c1_1[1]-'0');
	c2=(c2_1[0]-'0')*10+(c2_1[1]-'0');
	s1=(s1_1[0]-'0')*10+(s1_1[1]-'0');
	s2=(s2_1[0]-'0')*10+(s2_1[1]-'0');
	s1_2=(s1_1[2]-'A'+1);
	s2_2=(s2_1[2]-'A'+1);
	if(c1==c2){
		ans[0]='1';
	}
	else{
		cout<<ans;
		return 0;
	}
//	cout<<1<<"\n";
	if(s1==s2){
		ans[1]='1';
	}
	else{
		cout<<ans;
		return 0; 
	}
//	cout<<2<<"\n";
	if((s1_2<=3&&s2_2<=3)||(s1_2>3&&s2_2>=2)){
		ans[2]='1';
	}
	else{
		cout<<ans;
		return 0;
	}
//	cout<<"3\n";
	if(abs(s1_2-s2_2)==1){
		ans[3]='1';
	}
	cout<<ans;
//	cout<<"4\n";
	return 0;
} 
