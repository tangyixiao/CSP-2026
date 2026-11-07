#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005],used[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> t;
		memset(used,0,sizeof(used));
		for(int j=i;j<=n;j++){
			if(used[a[j]]!=0){
				while(t.top()==a[j]){
					t.pop();
					used[t.top()]=0;
				}
				t.pop();
			}else{
				t.push(a[j]);
				used[a[j]]=1;
			}
		}
		while(!t.empty()){
			cnt[t.top()]++;
			t.pop();			
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 
