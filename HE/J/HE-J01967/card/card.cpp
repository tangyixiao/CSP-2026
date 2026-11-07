#include<iostream>
using namespace std;
int n,m;
const int N=5e5+5;
const int M=3e5+5;
int a[N];
bool flag[M];
int b[M];
int ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) b[j]=0; 
		for(int j=1;j<=n;j++) flag[j]=false;
		for(int j=i;j<=n;j++){
			if(flag[a[j]]) {
				for(int k=b[a[j]]+1;k<j;k++) {
					flag[a[k]]=false;
				}
				b[a[j]]=j;
			}
			else{
				flag[a[j]]=true;
				b[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(flag[j]) ans[j]++;
		}	
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
