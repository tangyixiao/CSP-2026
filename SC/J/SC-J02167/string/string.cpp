#include<bits/stdc++.h>
using namespace std;
#define int long long
string a;
int n;
struct node{
	char v;
	int s,e;//起始下标，结束下标 
}nn[200010];
bool nos(int l,int r){//确定范围，l，r均为下表 
	//if(l==r)return 0;
	char ll,rr;int gs=0;
	for(int i=0;i<n;i++){
		if(l>=nn[i].s && l<=nn[i].e){
			ll=nn[i].v;
			gs++;
		}if(r>=nn[i].s && r<=nn[i].e){
			rr=nn[i].v;
			gs++;
		}
		if(gs>=2)break;
	}
	if(ll==rr)return 0;
	else return 1; 
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int top=0,x;
	char y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		top+=x;
		nn[i]={y,top-x,top-1};
	}
	int r=top-1,l=0,cnt=0;
	while(r>=l){
		if(nos(l,r))cnt++;
		l++,r--;
	}
	cout<<cnt;
	return 0;
} 