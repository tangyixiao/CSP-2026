#include<bits/stdc++.h>
using namespace std;

long long n,m,a[1000000],t[1000000],app[1000000],now;
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			app[j]=0;
		}
		for(int j=i;j<=n;j++){
			now=a[j];
			if(app[now]==0){
				app[now]++;
				s.push(now);
			}else{
				while(s.top()!=now){
					app[s.top()]=0;
					
					s.pop();
				}
				app[s.top()]=0;
				s.pop();
				s.push(now);
				app[now]++; 
			}
		}
		for(int j=0;j<s.size();j++){
			now=s.top();
			s.pop();
		}
		for(int j=1;j<=m;j++){
			if(app[j]!=0){
				t[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}
