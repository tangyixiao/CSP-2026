#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500001],cnt[300001];
int n,m;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(m<=2){
		cout<<n-1<<" "<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		cnt[a[i]]=max(cnt[a[i]],i);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
/*
观沧海

东临碣石，以观沧海。
水何澹澹，山岛竦峙。
树木丛生，百草丰茂。
秋风萧瑟，洪波涌起。
日月之行，若出其中。
星汉灿烂，若出其里。
幸甚至哉，歌以咏志。

---------------------------------

次北固山下

客路青山外，行舟绿水前。
潮平两岸阔，风正一帆悬。
海日生残夜，江春入旧年。
乡书何处达？归雁洛阳边。

---------------------------------

闻王昌龄左迁龙标遥有此寄

杨花落尽子规啼，闻道龙标过五溪。
我寄愁心与明月，随君直到夜郎西。

---------------------------------


*/
