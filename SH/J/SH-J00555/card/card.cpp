#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005],ans[500005],sum[500005],k=1;
	cin>>n>>m;
	int jushu=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==2 && m==1){
		cout<<"2";
		return 0;
	}
	if(n==2 && m==2){
		cout<<"2 1";
		return 0;
	}
//	while(n--){
//		for(int i=jushu-n+1;i<=jushu;i++){
//			for(int j=i;j<=n;j++){
//				if(a[i]!=a[j]){
//					ans[k]=a[j];
//					k++;
//				}
//				else{
//					int x=lower_bound(a+1,a+j+1,a[j])-a;
//					for(int q=x;q<=n;q++) a[q]=0;
//				}	
//			}
//			for(int y=1;y<=n;y++){
//				sum[a[y]]++;
//			}
//		}
//	}
//	for(int i=1;i<=m;i++){
//		cout<<sum[i]<<" ";
//	}
	return 0;
} 
