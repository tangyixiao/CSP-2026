#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
struct node{
	ll x,y;//x:值y:二进制中1的个数 
};
node a[200005];
bool cmp(node x,node y){
	if (x.y==y.y)return x.x>y.x;
	return x.y>y.y;
}//排序方式1
bool cmp1(node x,node y){
	if (x.x==y.x)return x.y>y.y;
	return x.x>y.x;
}//排序方式2 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		int b=a[i].x;
		while (b){
			a[i].y+=(b%2);
			b/=2;
		}
	}
	sort(a+1,a+n+1,cmp);//方式2 
	ll ans=(1<<32)-1;
	ll sum=ans;
	for(int i=1;i<=m;i++){ 
		ans&=a[i].x;
//		cout<<a[i].x<<endl;
	}
	sort(a+1,a+n+1,cmp1);//方式1 
	for(int i=1;i<=m;i++){
		sum&=a[i].x;
//		cout<<a[i].x<<endl;
	}
	cout<<max(ans,sum);//取最大值 
	return 0;
} /*100000 000011
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
/*
感觉是错的
但大样例过了 
*/
