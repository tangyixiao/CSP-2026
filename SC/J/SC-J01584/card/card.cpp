#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],b[300001],c[300001];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);	
	}
	int k=1;
	for(;k<=n;++k){
		for(int i=k;i<=n;++i){
			b[a[i]]++;
			q.push(a[i]);
			if(b[a[i]]>=2){
				while(q.top()!=a[i]||b[a[i]]>1){
					b[q.top()]--;
					q.pop();
				}
				b[q.top()]--;
				q.pop();
			}
		}
		for(int j=1;j<=m;++j){
			if(b[j]==1){
				c[j]++;
				b[j]=0;
				q.pop();
			} 
		} 
	}
	
	for(int i=1;i<=m;++i) printf("%d ",c[i]);
	fclose(stdin);fclose(stdout);
	return 0;
}