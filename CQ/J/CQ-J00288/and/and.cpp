#include<bits/stdc++.h>
#define int long long
using namespace std;
// 明显枚举位  
//不能数组开114514力（悲  
// Open By ANSI
int a[500050],n,m;
int andmax(int num,vector<int>nums){
	if(num<0)return 0;
	vector<int>ready;
	for(int i:nums){
		if((i>>num)&1)ready.push_back(i);
	}
	if(ready.size()>=m)return (1<<num)+andmax(num-1,ready);
	else return andmax(num-1,nums);
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	vector<int>v;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int k;cin>>k;
		v.push_back(k);
	}
	cout<<andmax(31,v);
	return 0;
}
//CCF的硬核才是王道 你那ICPC根本没技巧 
//florr:AST_Dream
/*
	也许有些背错了罢  
	(Maybe something is wrong)
	Creeper?
	Awww Man!
	So we come back in the mine
	Gotta your pick and swinging from
	s2s(side to side
	ss2s(side side to side
	This task is grueling one
	Hope to find diamond tonight
	night night night
	diamond tonight
	You hear up
	Turn around and some noise around you
	Get a shock and fills your body
	Oh no It's you again
	I can never forget those
	Eyes eyes eyes
	eyes eyes eyes-(eyes 
	'Cause baby tonight 
	The creeper is tryin' to steal all our stuff again
	stuff-again
	'Cause baby tonight
	Grab up your pick shovel and bolt again
	bolt again-again
	You ran ran ran
	Till it's done done done
	At the sun comes out in the morn'
	'Cause baby tonight
	The creeper is tryin' to steal all our stuff again
	… 
	I'm vegetable.
*/
