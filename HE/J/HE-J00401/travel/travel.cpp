/*
AKed !!!!!!!!!!!!!!!!!!!! AKed AKed AKed AKed AKed AKed AKed AKed 

luogu uid: elainya_stars

%%%%%%%%stostostosto SISIEF CSP-J orzorzorzorz%%%%%%%%

8:30 - 8:50 T1 passed
8:50 - 9:30 T2 passed
9:30 - 10:30 T3 passed
10:30 - 11:00 T4 passed
11:00 - 11:40 dui pai all passed

YESSSSSSSSSSSSSSSSSSSSSS
dont gua fen pls i beggggg uuuuu
dont gua fen pls i beggggg uuuuu
dont gua fen pls i beggggg uuuuu

let my luck continue to the CSP-S afternoon plssssssssssssssssssssss
if so, SISIEF ill never hate u againnnnnnnnnnnnn
PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS PLS
*/ 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf=0x3f3f3f3f3f3f3f3f;
string _inp;
char inp[30];
int a1,r1,a2,r2;char c1,c2;

signed main()
{
//	fastio;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,_inp);int _siz=_inp.size();
	for(int i=0;i<_siz;i++) inp[i]=_inp[i];
	sscanf(inp,"%lld %lld%c %lld %lld%c",&a1,&r1,&c1,&a2,&r2,&c2);
	int ans1=0,ans2=0,ans3=0,ans4=0;
	if(a1==a2)
	{
		ans1=1;
		if(r1==r2)
		{
			ans2=1;
			if((c1<='C' && c2<='C') || (c1>='D' && c2>='D'))
			{
				ans3=1;
				if(c1-1==c2 || c2-1==c1 || 
				   (c1=='D' && c2=='F') || (c1=='F' && c2=='D'))
				   ans4=1;
			}
		}
	}
	return cout<<ans1<<ans2<<ans3<<ans4<<'\n',0;
}
