#include <bits/stdc++.h>
using namespace std;
const int N=5005;
int a[N];
int ans[N]; 
int v[N];
int vv[N];
int t[N];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			v[j]=0;
			vv[j]=0;
			t[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(v[a[j]]==0){
				v[a[j]]=j; 
			}else{
//				cout<<v[a[j]]<<" "<<j<<"\n";
				for(int k=v[a[j]];k<j;k++){
					v[a[k]]=0;
					vv[k]=1;
//					if(k==10){
//						cout<<"\n"<<"\n";
//						cout<<i<<" "<<j<<" "<<v[a[j]]<<" "<<j<<"\n";
//					}
				}
				v[a[j]]=j;
			}
		}
//		cout<<n<<" "<<i<<":";
		for(int j=i;j<=n;j++){
//			if(vv[j]==0){
//				cout<<j<<" ";
//				cout<<a[j]<<" ";
//			}
			if(vv[j]==0){
				ans[a[j]]++;
			}
		}
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/ 
