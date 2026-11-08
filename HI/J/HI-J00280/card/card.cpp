#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500009]={},c[300009]={},ans[300009]={};
stack<int>s;
int check(){
	for(int z=1;z<=m;z++){
		if(c[z]!=0){
			ans[z]++;
		}
		c[z]=0;
	}
	while(!s.empty()){
		s.pop();
	}
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0){
				s.push(a[j]);
				c[a[j]]=1;
			}
			else{
				while(!s.empty()){
					if(s.top()==a[j]){
						c[s.top()]=0;
						s.pop();
						break;
					}
					else{
						c[s.top()]=0;
						s.pop();
					}
				}
				s.push(a[j]);
				c[a[j]]=1;
			}	
		}
		check();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
