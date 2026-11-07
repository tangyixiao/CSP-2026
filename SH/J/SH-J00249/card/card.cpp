#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
int ans[300005],a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		stack<int>s;
		bool v[500005]={};
		for(int i=t;i<=n;i++){
			if(v[a[i]]){
				while(s.top()!=a[i]){
					v[s.top()]=0;
					s.pop();
				}
			}else{
				s.push(a[i]);
				v[a[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(v[i])ans[i]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
