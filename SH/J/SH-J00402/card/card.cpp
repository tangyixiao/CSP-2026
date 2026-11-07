#include<bits/stdc++.h>
#define int1 long long
using namespace std;
int1 n,m,lenk=1;
int1 a[300005],an[300005],ans[300005];
struct card{
	int1 num,st,en,le;
}kk[200005];
bool cmp(card x,card y){
	if(x.le>y.le) return x.le>y.le;
	return x.en>y.en;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int tmp;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		ans[i]=tmp;
		a[tmp]++;
	}
	for(int1 i=1;i<=m;i++){
		if(a[i]>=2){
			kk[lenk].num=i;
			kk[lenk].en=0;
			kk[lenk].st=0;
			lenk++; 
		}
	}
	lenk--;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=lenk;j++){
			if(an[i]==kk[j].num){
				if(kk[j].st==0) kk[j].st=i;
				else kk[j].en=i;
			}
		}
	}
	for(int i=1;i<=lenk;i++){
		kk[i].le=kk[i].en-kk[i].st;
	}
	sort(kk+1,kk+1+lenk,cmp);
	for(int i=1;i<=m;i++){
		cout<<a[i]<<' ';
	}
	return 0;
} 
