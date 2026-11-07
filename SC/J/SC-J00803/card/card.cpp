#include <bits/stdc++.h>
using namespace std;
int n,m,temp;
int desk[300005],card[300005],ans[300005]={ };
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			desk[j]=card[j];
		}
		for(int p=i;p<=n;p++){
			temp=desk[p];
			for(int k=i+1;k<=n;k++){
				if(desk[k]==temp){
					for(int l=1;l<k;l++) desk[l]=0;
				}
			}
 			for(int q=1;q<=m;q++){
 				if(desk[p]==q) ans[q]++;
			}
		} 
		
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}