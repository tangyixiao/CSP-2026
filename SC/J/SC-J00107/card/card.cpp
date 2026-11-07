#include<bits/stdc++.h>
using namespace std;
stack<int> x;
bool t[1000005];
int w[1000005]={0};
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	cin>>a[i];
	}
	for(int k=1;k<n;k++){
		int i=k;
		for(int j=1;j<=1000005;j++){
			t[j]=0;
		}
		while(i<=n){
			if(t[a[i]]==0) {
				x.push(a[i]);
				t[a[i]]=1;
			}
			else{
				while(1){
					int d=x.top();
					if(d==a[i]) break;
					t[d]=0;
					x.pop();
				}
			}
			i++;
		}
		for(int j=1;j<=x.size();j++){
			w[x.top()]++;
			x.pop();
		}
	}
	for(int i=1;i<=n;i++){
		cout<<w[i]<<" ";
	}	
	return 0;
}