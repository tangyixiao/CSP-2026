#include<bits/stdc++.h>
using namespace std;
int n,m;
int x=0,y=0,ans1=0,ans2=0;
stack<int> s;
int a[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(m==1)cout<<n;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(a[i]==1){
					if(x==0){
						x=1;
						s.push(a[i]);
					}else{
						while(s.top()!=a[i]){
							s.pop();
						}s.pop();
					}
				}else{
					if(y==0){
						y=1;
						s.push(a[i]);
					}else{
						while(s.top()!=a[i]){
							s.pop();
						}s.pop();
					}
				}
			}
			if(s.size()==2){
				ans1++;
				ans2++;
				s.pop();
				s.pop();
			}if(s.size()==1){
				if(s.top()==1){
					ans1++;
				}else{
					ans2++;
				}
			}
		}cout<<ans1<<ans2;
	}
	return 0;
} 
