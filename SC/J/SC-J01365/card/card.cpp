#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int b[M],ans[M];
int a[N],c[N];
int n,m;
void f(){
	for(int l=1;l<=n;l++){
		c[l]=0;
	}
}
void f2(){
	for(int l=1;l<=m;l++){
		b[l]=0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(b[k]==0){
				c[sum+1]=k;
				sum++;
				b[k]=sum;
			}
			else{
				for(int p=b[k]+1;p<=sum;p++){
					b[c[p]]=0;
					sum=b[k];
				}
			}
			
		}
		for(int j=1;j<=sum;j++){
			ans[c[j]]++;
			
		}
		f();
		f2();
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;

}