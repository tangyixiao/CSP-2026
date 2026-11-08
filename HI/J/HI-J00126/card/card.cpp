#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int o=1;
			for(int q=i;q<=j;q++){
				if(b[q]==a[j]){
					o=0;
				}
				if(o==0){
					b[q]=0;
				}
			}
			b[j]=a[j];
		}
		for(int q=i;q<=n;q++){
				c[b[q]]++;
			}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
