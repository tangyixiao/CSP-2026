#include<bits/stdc++.h>
using namespace std;
stack<int> s;
bool f[3005];
int a[5005],b[3005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			f[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(f[a[j]]==1){
				while(s.top()!=a[j]){
					f[s.top()]=0;
					s.pop();
				}
			}
			else{
				s.push(a[j]);
				f[a[j]]=1;
			}
		}
		while(!s.empty()){
			b[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
