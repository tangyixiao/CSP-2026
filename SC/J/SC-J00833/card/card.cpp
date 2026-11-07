#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	int n,m;
	cin>>n>>m;
	int a[n+10],ans[m+10]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){//局数 
		int desk[n+10]={},p1=0,l[n+10]={},p2=0;
		for(int j=i;j<n;j++){
			bool h=1;
			for(int k=0;k<p2;k++){
				if(a[j]==l[k]){
					h=0;break;
				}
			}
			if(h){
				for(int k=0;k<p1;k++){
					if(desk[k]==a[j]){
						for(int t=k;t<p1;t++){
							l[p2++]=desk[t];
							desk[t]=0;
						}
						p1=k;
					}
				}
				desk[p1++]=a[j];
			}

		}
		for(int k=0;k<p1;k++){
		//	cout<<desk[k]<<" ";
			ans[desk[k]]++;
		}//cout<<endl;
		
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	
	return 0;
}