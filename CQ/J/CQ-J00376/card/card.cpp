#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	int n,m;
	cin>>n>>m;
	int stg=n*n/2;
	int a[stg],b[stg];
	int ans[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=m;i++){
		ans[i]=0;
	}
	//输入
//////////////////////////////////	 
	for(int i0=1;i0<=n;i0++){//
		for(int i=i0;i<=n;i++){//下一组游戏 
			
			for(int j=1;j<=i;j++){
				
				if(a[i]==b[j]){
					for(int k=a[i];k<=a[j];k++){
						a[k]=-1;
					}
					a[i]=b[j];
				}
			}			
			for(int j=1;j<=n;j++){
				if(a[i]==j){
					ans[j]++;
				}
			}
		
		}
		for(int i=1;i<=n;i++){
			
			
		}
	}
	

	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0; 
}

//4 3 1 2 1 3
//10 3 3 1 2 1 3 2 3 1 2 1
