#include<bits/stdc++.h>
using namespace std;
long long n,m,s,f=1,a[500005],x[300005],ans[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
		x[a[i]]=max(x[a[i]],i);;
	}
	if(f){
		for(int i=n;i>=1;i--){
			if(a[i+1]!=a[i]) ans[a[i]]+=i;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++){
		s=i;
		while(s<=n){
			ans[a[s]]++;
			if(x[a[s]]==s) s++;
			else s=x[a[s]]+1;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	
	return 0;
}
/*

I've been running in the strange life
chasing all the green lights
throwing of the shade for a little bit sun shine

qi dai ananta qwq , hate wang yi's yun ying.

*/

/*

I'm very angry!!!
Becase the jian kan guan(an old man)
doesn't allow me to paly the game(the little dinosaur/xiao kong long)(surfing/chong lang).

*/

/* I don't know the correct code of the forth question */

/* I'm the king of qu. */

/* shi jie quan ju zhong , huan ying lai dao xin ai li du */

/* en ne ~ , en ne wa da, en ne en ne ! */

/* 

bu shu yu zhe ge shi dai de yu zhe
hui wu zhi shang de wei da zhu zai
zhi zhang hao yun de huang hei zhi wang
nin zhong cheng de xin tu xiang nin qi qiu hao yun
ke wang nin bao you wo na dao j1= s1=
hui hu po , jiang li liang chuan di gei wo de zhou wen
kang nai xin , jiang li liang chuan di gei wo de zhou wen
zan mei yu zhe

*/

/* a!~ zhe yang shou zhen TM gou jing */ 