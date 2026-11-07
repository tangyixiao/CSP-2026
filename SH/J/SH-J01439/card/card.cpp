#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+1;
int n,m;
int a[maxn];
int cnt[maxn]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int tmp[maxn];
		for(int j=i;j<=n;j++){
			tmp[j]=a[j];
			for(int p=i;p<=j;p++){
				if(a[p]==a[j]){
					for(int q=p;q<j;q++){
						tmp[q]=0;
					}
				}
			}
		}
		for(int f=i;f<=n;f++){
			cnt[tmp[f]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
} 
