#include<bits/stdc++.h>
using namespace std;
string c_1,c_2;
string s_1,s_2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c_1>>s_1>>c_2>>s_2;
	int c1=(c_1[0]-'0')*10+(c_1[1]-'0'),c2=(c_2[0]-'0')*10+(c_2[1]-'0');
	int s1=(s_1[0]-'0')*10+(s_1[1]-'0'),s2=(s_2[0]-'0')*10+(s_2[1]-'0');
	char s1_=s_1[2],s2_=s_2[2];
	cout<<(c1==c2)<<(c1==c2&&s1==s2);//同一车厢，同一排 
	if(c1==c2&&s1==s2&&((s1_<='C'&&s2_<='C')||(s1_>='D'&&s2_>='D'))){//同一侧 
		cout<<1;
		if(s1_<='C'&&s2_<='C'&&(int(s1_-s2_)==1||int(s2_-s1_)==1)){//相邻 
			cout<<1;
		}else if((s1_>='D'&&s2_>='D')){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
	}
	return 0;
} 