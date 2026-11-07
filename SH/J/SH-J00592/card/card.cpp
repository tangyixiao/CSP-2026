#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e7+7;
int n,m,sum=0;
int a[MAXN],b[MAXN],c[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=1;
	int q=1;
	for(int l=1;l<=m;l++){
		for(int i=1;i<=n;i++){//第i局 
			for(int j=i;j<=n;j++){//从第i张牌开始的第j张牌
				int y=0; 
				for(int z=1;z<j;z++){//判断在桌面上的牌是否重复 
					if(a[j]==a[z] && y==0){
						y=1;
						q=z;
						b[q]=a[j];
						q++;			
					} 
				}
				if(y==0){
					b[q]=a[j];
					q++;
				}
				
			}
			
			for(int j=0;j<q;j++){
				if(b[j]==l){
					sum++;
				}
			}	
		}
		c[l]=sum;
		sum=0;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
