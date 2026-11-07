#include <bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{
	int n;
	int num;
	vector<int> i;
};
const int maxn=2e5+5;
int A[maxn];
node fa[35];
int n,m;
ll ans;
bool cmp(node a,node b){
	if(a.num>=m&&b.num>=m) return a.n>b.n;//如果都能取n个那么比谁位置大
	return a.num>b.num;//反之则不取
}
bool cmp1(int a,int b){
	return a>b;//大的在前
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		A[i]=a;
		int j=0;
		while(a>0){
			fa[j].n=j;
			fa[j].num+=(a&1);//有多少个数第j位是1
			if(a&1){//第j为是1就被存储
				fa[j].i.push_back(i);
			}
			j++;
			a>>=1;
		}
	}
	sort(fa,fa+35,cmp);
	vector<int> ggg;
	for(int i:fa[0].i){
		ggg.push_back(A[i]);
	}
	sort(ggg.begin(),ggg.end(),cmp1);
	int ans=ggg[0];
	int mj=0;
	for(int i:ggg){
		if(mj<m) ans&=i;
		mj++;
	}
	cout<<ans;
	return 0;
}