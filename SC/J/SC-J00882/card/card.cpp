#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
const int M=3*1e5+5;

int a[N],n,m;
int ans[M];
vector<int>p;
int vis[M];
void f(int x){
	for(int i=x;i<=n;i++){
		if(vis[a[i]]){
			while(1){
				if(p.back()==a[i])break;
				vis[p.back()]=0;
				p.pop_back();
			}
			continue;
		}
		p.push_back(a[i]);
		vis[a[i]]=1;
	}
	for(int i=0;i<p.size();i++){
		ans[p[i]]++;
	}
	return;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		f(i);
		while(p.size()){
			p.pop_back(); 
		}
		for(int j=0;j<=m;j++){
			vis[j]=0;
		}
	}
	for(int j=1;j<=m;j++){
		printf("%d ",ans[j]);
	}
	return 0;
} 