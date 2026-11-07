#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string cr,sr,cx,sx;
bool solve(char a,char b)
{
	if((a=='A' || a=='B' || a=='C') && (b=='A' || b=='B' || b=='C'))
		return true;
	if((a=='D' || a=='F') && (b=='D' || b=='F'))
		return true;
	return false;
}
bool check(char a,char b)
{
	if((a=='A' && b=='B') || (a=='B' && b=='A'))
		return true;
	if((a=='B' && b=='C') || (a=='C' && b=='B'))
		return true;
	if((a=='D' && b=='F') || (a=='F' && b=='D'))
		return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx && cr.size()>0 && cx.size()>0)
		cout<<'1';
	else if(cr!=cx && cr.size()>0 && cx.size()>0)
	{
		cout<<"0000";
		return 0;
	}
 	if(sr[0]==sx[0] && sr[1]==sx[1] && cr.size()>0 && cx.size()>0)
		cout<<'1';
	else if(cr.size()>0 && cx.size()>0)
	{
		cout<<"000";
		return 0;
	}
	if(solve(sr[2],sx[2]))
		cout<<'1';
	else if(cr.size()>0 && cx.size()>0)
	{
		cout<<"00";
		return 0;
	}
	if(check(sr[2],sx[2]))
		cout<<'1';
	else if(cr.size()>0 && cx.size()>0)
	{
		cout<<"0";
		return 0;
	}
	return 0;
}