#include<bits/stdc++.h>
using namespace std;
int n,m;
stack<int> s;
int a[300000];
bool f[300000];
int ans[300000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			int x = a[j];
			if(f[x] == true){
				int y = s.top();
				while(y != x){
					f[y] = false;
					s.pop();
					y = s.top();
				}
			}
			else{
				s.push(x);
				f[x] = true;
			}	
		}
		for(int j = 1;j <= m;j++){
			if(f[j]) ans[j]++;
		}
		while(!s.empty()){
			s.pop();
		}
		memset(f,0,sizeof(f));
	} 
	for(int i = 1;i <= m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
