#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool g[10][10],g2[10][10],ans[4];
void init(){
	g[0][1]=g[1][0]=true;
	g[1][2]=g[2][1]=true;
	g[3][5]=g[5][3]=true;
	g2[0][1]=g2[1][0]=true;
	g2[0][2]=g2[2][0]=true;
	g2[1][2]=g2[2][1]=true;
	g2[3][5]=g2[5][3]=true;
} 
int p1,p2;
int main(){ 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	init();
	p1=s1.back()-'A',p2=s2.back()-'A';
	s1.pop_back(),s2.pop_back();
	ans[0]=(c1==c2);
	ans[1]=ans[0]&&(s1==s2);
	ans[2]=ans[1]&&g2[p1][p2];
	ans[3]=ans[2]&&g[p1][p2];
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
} 
