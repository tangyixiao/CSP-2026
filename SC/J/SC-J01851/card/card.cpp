#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
long long js[300010];
long long ans[300010];
stack<int>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool YA=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]){
			YA=0;
		}
	}
	if(YA){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(!s.empty()&&s.top()==a[j]){
					s.pop();
				}else{
					s.push(a[j]);
				}
			}
			while(!s.empty()){
				js[s.top()]++;
				s.pop();
			}
		}
		for(int i=1;i<=m;i++){
			cout<<js[i]<<" ";
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(js[a[j]]>0){
				while(s.top()!=a[j]){
					js[s.top()]--;
					s.pop();
				}
				js[s.top()]--;
				s.pop();
			}
			js[a[j]]++;
			s.push(a[j]);
		}
		for(int j=1;j<=m;j++){
			ans[j]+=js[j];
			js[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}