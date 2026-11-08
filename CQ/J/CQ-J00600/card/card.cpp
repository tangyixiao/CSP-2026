#include<cstdio>
using namespace std;
const int xn=5e5+5,xm=3e5+5;;
int n,m,a[xn],last[xm],cnt[xm],now;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		now=i;
		while(now<=n){
			cnt[a[now]]++;
			if(last[a[now]]==now) now++;
			else now=last[a[now]]+1;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	return 0;
}
//好无聊啊……
//写一个简单的DFS吧
/*
freopen
freopne
freoepn
freoenp
freonpe
freonep
frepoen
frepone
frepeon
frepeno
frepnoe
frepneo
freeopn
……
neopefr
neoperf
nepfreo
nepfroe
nepfero
nepfeor
nepfore
nepfoer
neprfeo
neprfoe
neprefo
nepreof
neprofe
neproef
nepefro
nepefor
neperfo
neperof
nepeofr
nepeorf
nepofre
nepofer
neporfe
neporef
nepoefr
nepoerf
*/
//代码：
/*
#include<cstdio>
#include<iostream>
using namespace std;
bool flag[8];
string c[8]={"?","f","r","e","o","p","e","n"};
void DFS(int stp,string s){
	if(stp==7){
		cout<<s<<endl;
		return;
	}
	for(int i=1;i<=7;i++){
		if(!flag[i]){
			flag[i]=true;
			DFS(stp+1,s+c[i]);
			flag[i]=false;
		}
	}
}
int main(){
	freopen("freopen.out","w",stdout);
	for(int i=1;i<=7;i++){
		flag[i]=true;
		DFS(1,c[i]);
		flag[i]=false;
	}
	return 0;
}
*/
//0.3311seconds就能运行完
