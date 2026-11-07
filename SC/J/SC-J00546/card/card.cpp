// 4.card
// N
#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> a,dt,lp,fh;

int f(int num){
	for(int i=1;i<=n;i++){
		if(dt[i]==num) return i;
	}
	return 0;
}

void dapai(int pai){
	int ff=f(a[pai]);
	if(ff==0){
		dt.push_back(a[pai]);
	}
	else{
		for(int i=ff;i<=n;i++){
			fh.push_back(dt[i]);
			dt[i]=0;
		}
		dt.push_back(a[pai]);
	}
}

bool a_empt(){
	if(a.empty()) return 1;
	bool fff=0;
	for(int x:a) if(x!=0)fff=1;
	return fff;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	a.resize(n+2);dt.resize(n+2);lp.resize(m+2);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int x:dt){
			if(x!=0) a.push_back(x);
		}
		fh.clear();
		for(int x:fh) a.push_back(x);
		dt.clear();dt.resize(n+2);
		for(int pai=i;pai<=n;pai++){
			dapai(pai);
			a[pai]=0;
		}
		for(int x:dt) lp[x]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",lp[i]);
	return 0;
}
