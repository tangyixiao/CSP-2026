#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+5;
int a[N],ans[N];
bool f[N];
vector<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=1;i<=n;i++){
		a[i-1]=0;
		for(int j=1;j<=n;j++){
			if(a[j]==0) continue;
			if(f[a[j]]){
				while(!q.back()==a[j]){
					f[a[j]]=false;
					q.pop_back();
				}
			}
			else {
				q.push_back(a[j]);
				f[a[j]]=true;
			}
		}
		while(!q.empty()){
			cout<<q.back()<<" ";
			ans[q.back()]++;
			q.pop_back();
		}
	}
	for(int i=1;i<=n;i++){
		//if(ans[i]!=0) //printf("%d ",ans[i]);
	}
	printf("1");
	return 0;
}
