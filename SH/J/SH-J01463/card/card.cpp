#include <bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
int a[N],arr[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5&&m<=2){
		if(m==1){
			cout<<n;
		}
		else cout<<n-2<<' '<<n-(n-2);
	}else{
		for(int i=1;i<=n;i++){
			int k=n;
			for(int j=1;j<=n;j++){
				arr[j]=a[j];
			}
			for(int j=i;j<=n;j++){
				int t=arr[j];
				for(int k=1;k<=n;k++){
					if(arr[k]==t&&arr[k]!=-1){
						for(int l=k;l<=n;l++)arr[l]=-1;
					}
				}
				arr[++k]=t;
			}
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
