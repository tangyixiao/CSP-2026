#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
typedef long long ll;
ll lst[N],a[N],res[N];
ll d[N];
void solve(){
	int n,m;cin >> n >> m;
	for (int i=1;i<=n;++i){
		cin >> a[i];
		lst[a[i]]=i;
		res[i]=i;
		d[i]=res[i]-res[i-1];
	}
	for (int i=1;i<=n;++i){
		res[i]=res[i-1]+d[i];
		if (i+1<=lst[a[i]]){
			d[i+1]-=res[i],d[lst[a[i]]]+=res[i];
//			cout<<i+1<<" "<<lst[a[i]]<<" "<<
		}
//		for (int j=i+1;j<lst[a[i]];++j){
//			res[j]-=res[i];
//		}
	}
	for (int i=1;i<=m;++i) cout<<res[lst[i]]<<" ";
//	cout<<'\n';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
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
//我回来了！(9:20左右)
//我把电源线踢掉了，然后黑黑黑了😂😂😂👨‍❤️‍💋‍👨👨‍❤️‍💋‍👨👨‍❤️‍💋‍👨🧊🧊🧊
//哎呀怎么没发草稿纸啊。。。
//你考虑怎么判断一个牌最后被消除
//那么左右两边一定是有一对牌是的他们颜色相同
//右边的不用管，只用管左边的，左边的尽可能向右靠拢
//欸！那不就做完了吗
//对于每个点，找到最靠右的相同颜色的位置
//然后中间的位置只要。。。
//不对！这是什么玩意，如果左边那个牌早就被删除了呢。。

//哦哦哦！最后的答案可以只看最右边的拥有这个颜色的出现次数
//然后呢。。。

//完蛋了我现在有点慌，都9:45了还不会

//这个存在时间不连续，这怎么搞？如果多个配对减去区间内
//很可能算重

//不对。。。每一次被消除都一定是被一个固定的给删除的
//可不可以“一个配对删除哪些节点”这样统计？
//然后用每一个前面牌出现的次数减去中间的？
//好像成了！
//大概就是区间减法
//我咋这么。。。前头都想到了我给我否定了

//像这样，会不会重复：
/*
--------
|  --- |
|..|.|.|
*/
//好像是不会的
//每个节点选最远的点去更新
//看作“自己都敢杀自己”
//9:59
//怎么把注释删去后比t1还要短？