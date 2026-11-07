#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],mun[300005]={0},b[500005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			for(int o=1;o<j;o++){
				if(b[o]==a[j]){
					for(int q=o;q<j;q++){
						b[q]=0;
					}
				}
			}
			b[j]=a[j];
		}
		for(int j=1;j<=n;j++){
			mun[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mun[i]<<' ';
	}
	return 0;
}