#include<bits/stdc++.h>
#define int long long
#define N
using namespace std;

string a,b;

int c1,c2,c3,s1,s2,s3;

bool flag[5][5]={
	{0,1,0,0,0},
	{1,0,1,0,0},
	{0,1,0,0,0},
	{0,0,0,0,1},
	{0,0,0,1,0}
};

bool flag1[5][5]={
	{1,1,1,0,0},
	{1,1,1,0,0},
	{1,1,1,0,0},
	{0,0,0,1,1},
	{0,0,0,1,1}
};

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>c1>>a>>s1>>b;
	for(int i=0;i<2;i++){
		c2=c2*10+(int)(a[i]-48);
		s2=s2*10+(int)(b[i]-48);
	}
	c3=(int)(a[2]-'A');
	s3=(int)(b[2]-'A');
	if(c1!=s1) cout<<"0000";
	else{
		cout<<1;
		if(c2!=s2) cout<<"000";
		else{
			cout<<1;
			if(!flag1[c3][s3]) cout<<"00";
			else{
				cout<<1<<flag[c3][s3];
			}
		}
	}
	return 0;
}
