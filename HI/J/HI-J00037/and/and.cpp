#include<bits/stdc++.h>
using namespace std;
/*
一个性质 对于1<=k<=log2(a) sigma(k-1,i=1,2^i) 严格小于 2^k
我们从高位到低位处理 优先满足高位
对于以后每一位：
	如果满足前面高位的多个数(大于等于m) 在这位的数是1的数量大于m 那么这位当选 
*/
const int N=2*1e5+5; 
int n,m,ans;
int a[N];bool last[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	//先假设所有数在第31位都表示1 但其实根本就没有31位的数 只是处理最高位 
	for(int i=1;i<=n;i++) last[i]=true;
	for(int i=30;i>=0;i--){
		int cnt_1=0;
		for(int j=1;j<=n;j++) cnt_1+=((a[j]>>i)&1)&&last[j];
		if(cnt_1<m) continue;
		ans+=1<<i;
		for(int j=1;j<=n;j++) last[j]=(a[j]>>i)&1;
	}
	cout<<ans<<"\n"; 
	return 0;
}
 
