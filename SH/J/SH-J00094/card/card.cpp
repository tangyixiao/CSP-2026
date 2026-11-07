#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int freq[m+5]={0};
	for(int i=1;i<=n;i++){
		deque<int>x;
		int ap[m+5]={0};
		for(int j=i;j<=n;j++){
			if(ap[a[j]]>=1){
				while(x.front()!=a[j]&&(!x.empty())){
					ap[x.front()]--;
					x.pop_front();
				}
				if(!x.empty()){
					ap[x.front()]--;
					x.pop_front();	
				}
				
			}
			x.push_front(a[j]);
			ap[a[j]]++;
		}
		while(!x.empty()){
			freq[x.front()]++;
			x.pop_front();
		}
	}
	for(int i=1;i<=m;i++){
		if(freq[i]!=0)cout<<freq[i]<<" ";
	}
	return 0;
}
