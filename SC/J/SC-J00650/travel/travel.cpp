#include<bits/stdc++.h>
using namespace std;

int c,c_;
string s,s_;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c_>>s_;
	if(c==c_)
		cout<<'1';
	else
		cout<<'0';
	if(((s[0]==s_[0])&&(s[1]==s_[1]))&&(c==c_))
		cout<<'1';
	else
		cout<<'0';
	if(((s[2]>='D'&&s_[2]>='D')||(s[2]<'D'&&s_[2]<'D'))&&(((s[0]==s_[0])&&(s[1]==s_[1]))&&(c==c_)))
		cout<<'1';
	else
		cout<<'0';
	int num=s[2]-s_[2];
	if(((num>=-1)&&(num<=1))&&(((s[2]>='D'&&s_[2]>='D')||(s[2]<'D'&&s_[2]<'D'))&&(((s[0]==s_[0])&&(s[1]==s_[1]))&&(c==c_))))
		cout<<'1';
	else
		cout<<'0';
    return 0;
}