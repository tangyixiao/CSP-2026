#include<bits/stdc++.h>
using namespace std;
int n,m,a[200009],ans,sl[200009],cnt1,lo=-1,p[31],can[31];
vector<int> cnt[31];
bool cmp(int x,int y){return (a[x]%p[lo])>(a[y]%p[lo]);}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	p[0]=1;
	for(int i=1;i<=30;i++) p[i]=p[i-1]*2;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		int l=a[i];
		for(int j=30;j>=0;j--){
			if(p[j]<=l){
				l-=p[j];
				cnt[j].push_back(i);
			}
			if(l==0) break;
		}
	}
	for(int i=30;i>=0;i--){
		if(cnt[i].size()>=m){
			can[i]=1;
			if(lo==-1) lo=i;
		}
	}
	if(lo==-1){
		cout<<0;
		return 0;
	}
	for(int i=0;i<cnt[lo].size();i++) sl[++cnt1]=cnt[lo][i];
	sort(sl+1,sl+cnt1+1,cmp);
	ans=a[sl[1]];
	for(int i=2;i<=m;i++) ans=(ans&a[sl[i]]);
	printf("%d",ans);
	return 0;
}
