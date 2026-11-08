#include<bits/stdc++.h>//直接模拟 （另一侧是D、F，不是D、E，大样例都没有提示，好恶毒 
using namespace std;
string c1,s1,c2,s2;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	int x=(s1[0]-'0')*10+s1[1]-'0';
	int y=(s2[0]-'0')*10+s2[1]-'0';
	if(x!=y){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
		cout<<1;
	}
	else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')
	{
		cout<<1;
	}
	else {
		cout<<"00";
		return 0;
	}
	if(abs(int(s1[2])-int(s2[2]))==1||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))cout<<1;
	else cout<<0;
	return 0;
}
