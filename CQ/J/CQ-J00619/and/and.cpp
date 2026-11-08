#include<bits/stdc++.h>
#define int long long
//#define double long double
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
using namespace std;
const int M=2e5+5,INF=1e18;
int n,m;
int max_ans=-INF;
struct sr{
	int a;
}a[M];
bool cmp(const sr&x,const sr&y){
	return x.a>y.a;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	/*
	按位与:
	"&"
	*/
	for(int i=1;i<=n+1;i++) cin>>a[i].a;
	sort(a+1,a+n+2,cmp);
	int max_ans=a[1].a;
	for(int i=2;i<=m;i++){
		max_ans=((max_ans)&(a[i].a)); //位运算加括号 
	}
	cout<<max_ans<<'\n';
	return 0;
}
/*
4 2
2 3 15 12 12
//12
*/
/*
5 3
2 31 3 1 15 7
//7 
*/
