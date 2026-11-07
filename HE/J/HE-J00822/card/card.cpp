//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//int a[500005];
//int b[500005];
//int p[300005];
//int main(){
////	freopen("card.in","r",stdin);
////	freopen("card.out","w",stdout);
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(int i=n;i>=1;i--){
//		p[i]=i;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int p[300005];
int sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(p,0,sizeof(p));
		for(int j=i;j<=n;j++){
			if(p[a[j]]==1){
				memset(p,0,sizeof(p));
			}
			p[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(p[j]==1){
				sum[j]++;
			}
		}
	}
	for(int j=1;j<=m;j++){
		cout<<sum[j]<<" ";
	}
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
