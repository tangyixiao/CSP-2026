#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[500005];
map<int,int> p;
stack<int> t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(p[a[i]]){
				while(t.top()!=p[a[i]]&&t.size()>1){
					p[t.top()]=0;
					t.pop();
					
				}
				p[t.top()]=0;
				t.pop();
			}
			t.push(a[i]);
			p[a[i]]=1;
		}
	
		while(!t.empty()){
			ans[t.top()]++;
			t.pop();
			
		}
		cout<<endl;
		p.clear();
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}

