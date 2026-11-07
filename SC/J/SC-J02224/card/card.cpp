#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5;
int n,m,a[N],f[N],t[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];	
	for(int p=1;p<=n;p++){
		int k=0;
		for(int i=p;i<=n;i++){
			int l=1,y;
			for(int j=1;j<=k;j++){
				if(a[i]==f[j]) {l=0,y=j;break;}
			}
			if(l==1){
				f[++k]=a[i];
			}
			else{
				for(int j=y;j<=k;j++){
					if(f[j]!=0) f[j]=0,k--;
				}	
				f[++k]=a[i];
			}
		}
		for(int i=1;i<=k;i++){
			t[f[i]]++;
		}
//		for(int i=1;i<=k;i++) cout<<f[i]<<" ";
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	
	return 0;
}
/*
普及+/提高-
雷霆大模拟但要优化，（不然就不是T4了）
10：57过掉前3个样历，希望有48pts
*/
/*
南无阿弥陀佛
南无燃灯古佛
南无如来佛祖
南无弥勒佛
南无观世音菩萨
南无斗战胜佛
南无镇元大仙
南无CCF评测机佛
南无CCF数据佛
南无Hamburger神犇
南无flhuang神犇
南无zzzZZZZYY神犇
Please保佑me CSP1=奖
QWQ
不知道能不能上luogu的迷惑行为大赏
ovo
*/