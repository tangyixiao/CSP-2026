#include<bits/stdc++.h>
using namespace std;
int a[500010],ans[500010];
stack<int> s;
int v[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		for(int j=i;j<=n;j++){
			if(v[a[j]]){
				while(s.top()!=a[j]){
					v[s.top()]--;
					s.pop();
//					printf("1 %d %d\n",i,j);
				}
			}
			else{
				s.push(a[j]);
				v[a[j]]++;
			}
		}
		while(s.size()){
			ans[s.top()]++;
			s.pop();
//			printf("2 %d\n",i);
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
/*
4 3
1 2 1 3
*/
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/