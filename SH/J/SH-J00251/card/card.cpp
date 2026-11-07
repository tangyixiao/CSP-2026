#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[500050];
int p[300050];
int ans[300050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof(ans));
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		int cnt=1;
		memset(p,0,sizeof(p));
		for(int j=i;j<=n;j++){
			if(p[a[j]]!=0){
				int temp=cnt;
				for(int k=p[a[j]]+1;k<=cnt;k++){
					s.pop();temp--;
				}
				cnt=temp;
			}
			s.push(a[j]);
			p[a[j]]=cnt;
			cnt++;
		}
		while(s.size()){
			int x=s.top();
			s.pop();
			ans[x]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
