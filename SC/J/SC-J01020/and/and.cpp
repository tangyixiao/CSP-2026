#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
struct node{
	int x,tot;
};
const int MAXN=2e5+5;
node a[MAXN];
int n,m;
int countone(int x){
	int c=x,cnt=0;
	while(c!=0){
		if(c%2==1) cnt++;
		c/=2;
	}
	return cnt;
}
bool cmp(node a,node b){
	return a.tot<b.tot;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i].x;
		a[i].tot=countone(a[i].x);
	}
	sort(a,a+n,cmp);
	cout<<a[m-1].x;
	return 0;
}