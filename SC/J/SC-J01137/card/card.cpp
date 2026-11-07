#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
const int M=3e5+100;
struct node{
	int ans;
	int kll;
}b[M];
int n,m;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]].kll=i;
	}
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			if(b[a[j]].kll<=j){
				b[a[j]].ans++;
			}else{
				int mkl=b[a[j]].kll;
				j=mkl-1;
			}
		} 
	}
	for(int i=1;i<=m;i++){
		cout<<b[i].ans<<" ";
	}
	return 0;
}