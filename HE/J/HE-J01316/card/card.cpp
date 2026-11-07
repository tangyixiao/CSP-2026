#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
int a[MAX],b[MAX],sum1[MAX];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool f=1;
	int sum=1,sum2=0;
	int jl=0;//¼ÇÂ¼ 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		b[0]=a[i];
		for(int j=i+1;j<=n;j++){
			for(int k=0;k<sum;k++){
				if(b[k]==a[j]){
					f=0; jl=k;break;
				}
			}if(f){
				b[sum]=a[j];sum++;
			}
			if(!f){
				for(int k=j;k<sum;k++){
					b[k]=0;
				}b[j]=a[j];
				sum=jl+1;
			}f=1;
		}for(int j=0;j<sum;j++ ){
			sum1[b[j]]++;b[j]=0;
		}sum=1;
	}for(int i=1;i<=m;i++) cout<<sum1[i]<<" ";
	return 0;
}
