#include<bits/stdc++.h>
using namespace std;
stack <int> t;
int a[500005];
int z[300005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(z,0,sizeof(z));
		for(int j=i;j<=n;j++){
			if(z[a[j]]==1){
				while(t.top()!=a[j]){
			    	int w=t.top();
					t.pop();
					z[w]=0;
				}
			    int w=t.top();
				t.pop();
				z[w]=0;
			}
			t.push(a[j]);
			z[a[j]]=1;
		}
		while(!t.empty()){ 
			int w=t.top();
			t.pop();
			ans[w]++; 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
    fclose(stdin);
	fclose(stdout);
	return 0;
} 
