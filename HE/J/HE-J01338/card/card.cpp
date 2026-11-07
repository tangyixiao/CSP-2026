#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	int a[n],pai[m]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack <int> x;
	stack <int> y; 
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			bool r=1;
			while(!x.empty()){		
				y.push(x.top());
				if(x.top()==a[j]){
					while(!y.empty()){ 
						y.pop();
						r=0;
					}x.pop();
					break;
				}x.pop();
			}
			if(r){
				while(!y.empty()){
					x.push(y.top());
					y.pop();
				}
			}
			x.push(a[j]);
		}while(!x.empty()){
			pai[x.top()]++;
			x.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<pai[i]<<" ";
	}
	return 0;
}

