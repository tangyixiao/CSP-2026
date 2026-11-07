#include<bits/stdc++.h>
using namespace std;
int a[272560];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; cin>>n>>m;
	if(m==1){
		int smx=-272560;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			smx=max(smx,a[i]);
		}
		cout<<smx;
	}
	else if(m==n){
		int smx; cin>>smx;
		for(int i=1;i<n;i++){
			int a; cin>>a;
			smx&=a;
		}
		cout<<smx;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		} int smx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>smx) smx=(a[i]&a[j]);
			}
		}
		cout<<smx<<endl;
	}
	else {
		bool f=true;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>4) f=false;
		}
		if(f=true){
			int cnt1=0,cnt2=0,cnt3=0;
			for(int i=1;i<=n;i++){
				if(a[i]==1) cnt1++;
				else if(a[i]==2) cnt2++;
				else if(a[i]==3) cnt3++;
			}
			if(m<=cnt3) cout<<3;
			else if(m<=(cnt2+cnt3)) cout<<2;
			else cout<<1;
		}
	}
	return 0;
}
/*
嗵嗵（goddess）
神明神明张开嘴(goddess goddess may you speak)
让我知道我是谁(you should tell me who am I)
他把我向天上推(it blow me up into the sky)
掠过尘与灰(keep the dust away)
不得不停歇不停歇(I won`t stop I also can not stop)
黑夜在背上飞(darkness flying on my back)
来狂欢吧狂欢吧(oh come on now shake you hands) 
永远不下坠(never falling down) 
太阳太阳 请你告诉我(sunlight sunlight should you tell me now)
为什么为什么 遗憾那么多(wyh sadness why sadness always full my heart)
夜幕 夜幕 请你告诉我(moonbeam moonbeam may you tell me now)
该怎么做 怎么做 灵魂才不会破(so how can I how can I don`t let soul break apart)
嗵 一声落下 果实 嗵 一声落下(pop it fallen down the fruit pop has fallen down)
我的脚下开了花(flower bloom under my feet)
嗵 一声落下 骨头嗵 一声落下(pop it fallen down the bone pop has fallen down)
可以了 可以了 可以变回孩子了(it`s okay it`s okay it`s okay to be a child)
*/
