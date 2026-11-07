#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],last[M],ex[N],fa[N],l[M],ans[N];
int find(int x){
	if(fa[x]!=x)fa[x]=find(fa[x]);
	return fa[x];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)fa[i]=i;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
		if(l[a[i]])fa[l[a[i]]]=i;
		l[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		ex[i]++;
		if(last[a[i]]!=i)ex[find(i)]+=ex[i];
		else{
			ans[a[i]]=ex[i];
			ex[i+1]+=ex[i];
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}
/* 
//HE-J00575
思路：首先，瞪眼法发现每种元素只有最后一个才会留存到最后。
其次，被访问次数可以加算。 
代码：并查集存储序列中最靠后的一个
顺序遍历，对于每一个元素，先将标记（总访问次数） +1.
如果是这一种的最后一个元素，这种元素的答案=标记次数+1，下一个元素的标记+=当前元素的标记+1 
否则， 这种元素的最后一个的标记+=这个元素的标记（1）。 
时间复杂度 O(n*find())
keywords:
crad.in
adn.in
stirng.in
trvael.in
trave1.in
card6.in
and5.in
string6.in
travel5.in
	freopen("card6.in","w",stdin);
	freopen("and5.in","r",stdout);
	freopen("string6.in","w",stdin);
	freopen("travel5.in","r",stdout);
//freopen("card.in","r",stdin);
//	freopen("card.in","r",stdin);
	//freopen("card.in","r",stdin);
	freopen("card.in","w",stdin);
	freopen("card.in","r",stdout);
luogu
kkksc
#include<bits\stdc++.h>
#include<windows.h> 
#define int long long
int mian()
114514
998244353

int uid=1337006;
*/
