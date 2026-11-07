#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[300005];
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	int zm[500005];
	int js[300005];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			bool f=1;
			for(int k=1;k<=j;k++){
				if(zm[k]==a[j]){
					for(int q=k;q<=j;q++){
						zm[q]=0;
					}
					f=0;
					j=k;
				}
			}
			if(f) zm[j]=a[j];
			j++;
		}
		for(int j=1;j<=n;j++){
			js[zm[j]]++;
		}
	}
	for(int i=1;i<n;i++){
		cout<<js[i]<<' ';
	} 
}