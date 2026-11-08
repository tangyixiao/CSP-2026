#include<bits/stdc++.h>
#define wef(i,l,r) for(int i=l;i<=r;i++)
#define few(i,r,l) for(int i=r;i>=l;i--)
#define pii pair<int,int>
#define endl cout<<"\n"
using namespace std;
using ll=long long;
bool l[130];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	l['A']=l['B']=l['C']=1;
	string a1,p1,a2,p2;
	cin>>a1>>p1>>a2>>p2;
	if(a1!=a2) cout<<"0000";
	else if(p1[0]!=p2[0]||p1[1]!=p2[1]) cout<<"1000";
	else if(l[p1[2]]!=l[p2[2]]) cout<<"1100";
	else if(abs(p1[2]-p2[2])!=1) cout<<"1110";
	else cout<<"1111"; 
	return 0;
}
