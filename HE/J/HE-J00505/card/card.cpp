#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int arr[maxn];
int a[maxn];
int ans[maxn];
int x[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int z=0;z<n;z++){
		for(int c=0;c<j;c++){
			arr[c]=0;
		}
		j=0;
		for(int i=z;i<n;i++){
			arr[x[i]]++;
			if(arr[x[i]]==1){
				a[j]=x[i];
				j++;
			}else{
				int j1=j-1;
				int cnt=0;
				for(int m=j1;a[j1]!=x[i];m--){
					a[m]=0;
					cnt++;
				}
				j-=cnt-1;
			}
		}
		for(int j2=0;j2<=j;j2++){
			for(int i=1;i<=n;i++){
				if(a[j2]==i){
					ans[i]++;
				}
			}
		}
	}
	cout<<ans[1];
	for(int i=2;i<=n;i++){
		cout<<" "<<ans[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
