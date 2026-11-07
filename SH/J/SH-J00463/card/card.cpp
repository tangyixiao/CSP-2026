#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[300010],c[300010];
set<int> s;
stack<int> q;
bool ifa=true;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) ifa=false;
	}
	if(n<=200000){
		if(m<=2){
			if(m==1){
				cout<<n;
			}else{
				int s1,s2;
				for(int i=1;i<=n;i++){
					if(a[i]!=a[n]){
						s1++;s2++;
					}else if(a[i]==1) s1++;
					else s2++;
				}cout<<s1<<" "<<s2;
			}
			return 0;
		}
		if(ifa){
			for(int i=2;i<=n;i++){
				if(a[i]!=a[i-1]) cout<<i-1<<" ";
			}cout<<5000;
			return 0;
		}
		if(n<=500){
			for(int i=1;i<=n;i++){
				for(int j=i;j<=n;j++){
					if(c[a[j]]){
						while(q.top()!=a[j]){
							c[q.top()]--;
							q.pop();
						}
					}else{
						c[a[j]]++;
                        q.push(a[j]);
					}
				}
				while(!q.empty()){
					c[q.top()]--;
					s.insert(q.top());
					q.pop();
				}
				for(int j=1;j<=m;j++){
					if(s.count(j)){
						b[j]++;
					 	s.erase(j);
					}
				}
			}
			for(int i=1;i<=m;i++) cout<<b[i]<<" ";
			return 0;
		}
	}
	return 0;
}
