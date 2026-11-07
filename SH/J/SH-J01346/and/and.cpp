#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	if(m==1){//#6特判 ,+5pts
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	if(m==n){//#7特判 ,+5pts
		int ans=a[1];
		for(int i=1;i<=n;i++) ans=ans&a[i];
	} 
	if(m==n-1){//#11、#12特判，+10pts 
		int maxn=0;
		for(int i=1;i<=n;i++){
			int ans;
			if(i==1) ans=a[2];
			else ans=a[1];
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				ans=ans&a[i];
			}
			maxn=max(maxn,ans); 
		}
	}
	if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
	}//双选特判 #8、9、10，+15pts 
}
//100+50+35+65=250pts
/*(上接string)
五陵年少争缠头，一曲红苕不知数
钿头银篦击节碎，血色罗裙翻酒污
今年欢笑复明年，秋月春风等闲度
弟走从军阿姨死，暮去朝来颜色故

门前冷落车马稀，老大嫁做商人妇
商人重利轻别离，前月浮梁买茶去
去来江口守空船，绕舱明月江水寒
夜深忽梦少年是，梦啼妆泪红阑干

我问琵琶已叹息，又闻此语重唧唧
同是天涯沦落人，相逢何必曾相识
我从去年辞帝京，谪居卧病浔阳城

浔阳地僻无音乐，终岁不闻丝竹声
住近蓬江地低湿，黄芦苦竹绕宅生
期间旦暮闻何物，杜鹃啼血猿哀鸣
（下见card）
10:57 debug一下*/
