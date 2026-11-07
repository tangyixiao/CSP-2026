#include<bits/stdc++.h>
using namespace std;
stack<int> c;
bool b[300001]={false};
int n,m,a[500001],ans[300001];
void get(int x){
	while(c.top()!=x){
		b[c.top()]=false;
		c.pop();
	}
}
void again(){
	for(int i=0;i<300001;i++){
		b[i]=false;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]){
				get(a[j]);
			}else{
				b[a[j]]=true;
				c.push(a[j]);		
			}
		}
		for(int j=0;j<=m;j++){
			if(b[j]){
				ans[j]++;
			}
		}
		again();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
