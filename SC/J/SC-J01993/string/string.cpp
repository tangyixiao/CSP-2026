#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
ll a[N];char c[N];
ll lt[N],rt[N];
void solve(){
	int n;cin >> n;
	ll sm=0;
	for (int i=1;i<=n;++i) cin >> a[i] >> c[i],sm+=a[i],lt[i]=rt[i-1]+1,rt[i]=lt[i]+a[i]-1;
	ll dyl,dyr;
	int tl,tr;ll q1,q2;ll res=0;
	for (int i=1;i<=n;++i){
		if (lt[i]>sm/2) break;
		dyl=sm-rt[i]+1,dyr=sm-lt[i]+1;
		if (dyl<=sm/2) dyl=sm/2+1;
		tl=lower_bound(rt+1,rt+1+n,dyl)-rt;
		tr=lower_bound(rt+1,rt+1+n,dyr)-rt;
		//那么[tl..tr]中间的数都会被选入
		for (int j=tl;j<=tr;++j){
			q1=max(lt[j],dyl),q2=min(rt[j],dyr);
			if (q1>q2) break;
//			cout<<i<<" "<<j<<" : "<<q1<<" "<<q2<<'\n';
			if (c[j]!=c[i]) res+=q2-q1+1;
		}
//		cout<<res<<"\n";
	}
	cout<<res<<"\n";
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//	cin >> T;
	for (int _=0;_<T;++_) solve();
	cout.flush();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//大模拟啊。。。
//更好的实现方法：可能可以把两边都划分为长度相同的
//中心的那个就不管了
//谁把我键盘扣了啊/ll，为啥有神秘人要把上面的数字
//和右边的小键盘的数字对调啊。。。
//欸！我想到一个很好的实现方法。。。
//谁把我凳子锯了一半啊，这个凳子怎么这么矮
//好挤啊
//9:07
//这个人没有扣下来5的原因是5在正中间