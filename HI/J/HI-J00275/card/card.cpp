#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	int c[n];
	for(int i = 1;i<=n;i++){
		cin>>a[i];//输入a 
		c[i]=a[i];
	}
	for(int i = 1;i<=m;i++){
		b[i]=0;//清空b 
	}
	
	
	for(int k=1;k<=n;k++){
		for(int i = k;i<=n;i++){
			if((c[i]==c[k])&&(i!=k)){
				
				for(int j = k;j<i;j++){
					c[j]=0;
				}
			}
		}
		for(int i = k;i<=n;i++){
			b[c[i]]++;
		}
		for(int i = k+1;i<=n;i++){
			c[i]=a[i];
		}
	}
	
	for(int i = 1;i<=m;i++){
		cout<<b[i]<<" ";//输出结果 
	} 
	return 0;	
} 
