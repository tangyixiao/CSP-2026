//T4 16
#include<bits/stdc++.h> 
using namespace std;
int a[200100],n,m;
long long kkk[200100],tong[200100];
long long sum,ans=2147483647,maxn=31;
int main(){
    //freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=500){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) kkk[j]=0;
			for(int j=i;j<=n;j++){
				if(kkk[a[j]]){
					for(int k=1;k<=j-1;k++){
						if(a[k]==a[j]){
							for(int l=k;l<=j-1;l++) kkk[a[l]]--;
							break;
						}
					}
				}
				kkk[a[j]]++;			
			}
			//for(int j=1;j<=m;j++) cout<<kkk[i]<<' ';
			for(int j=1;j<=m;j++){
				
				if(kkk[j]) tong[j]++;
			}
			
		}
		for(int i=1;i<=m;i++) cout<<tong[i]<<' ';
}
	else {
		for(int i=1;i<=m;i++) cout<<upper_bound(a+1,a+n+1,i)-a-1<<' ';
	}
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}

