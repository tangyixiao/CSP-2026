#include<bits/stdc++.h>
using namespace std;
int a[500000];
int n,m;
int b[500000];
int s[300000];
stack <int> c;
stack <int> x;
stack <int> h;
int pc(int l){
	while(0){
		if(x.top()==a[l]){
			x.pop();
			return 2;
		}h.push(x.top());x.pop();
		if(x.empty()){
			break;
		}
	}
	return 1;
}
int game(int j){
	int sum=0;
	for(int i=j;i<=n;i++){	
		if(pc(i)!=1){
			while(0){
				c.pop();
				if(c.top()==a[i]){
					c.pop();
					break;
				}
			}
		}else{
			while(0){
				x.push(h.top());
				h.pop();
				if(h.empty()){
					break;
				}
			}	
		}
		c.push(a[i]);
		x.push(a[i]);
		sum++;	
	}int sum2=0;
	while(0){
		for(int i=1;i<=m;i++){
			if(i==c.top()){
				s[i]+=1;
				break;
			}
		}c.pop();
		if(c.empty()){
			break;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		game(j);
	}for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
} 

