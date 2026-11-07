#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lastcome[300005],ans[505];
bool flag=1,used[505];
void solve1(){
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]) lastcome[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<lastcome[i]<<" ";
	}
}
void solve2(){
	for(int i=1;i<=n;i++){
		stack<int> s;
		for(int j=i;j<=n;j++){ 
		    s.push(a[j]);
		    vector<int> store;
		    int time=0;
			while(!s.empty()){
				int t=s.top();
				if(t==a[j]&&time==1){
					while(store.size()>0) store.clear();
				}
				if(t==a[j]&&time==0) time++;
				store.push_back(t);
				s.pop();
			}
			for(int i=0;i<store.size();i++){
				s.push(store[i]);
			}
		}
		while(!s.empty()){
			int t=s.top();
			ans[t]++;
			cout<<t<<" ";
			s.pop();
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=0;
	}
	if(flag==1) solve1(); //ok 20pts
	else solve2(); //ok 24pts
	fclose(stdin);
	fclose(stdout);
	return 0;
}
