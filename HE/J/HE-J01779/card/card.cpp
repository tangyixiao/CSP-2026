#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,i=1,p=0;
	long long a[500005]={0};
	long long b[500005]={0};
	long long sum[500005]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(n--){
		bool flag=false,flag1=true;
		while(flag1){
			for(int j=i-1;j<=n;j++){
				for(int k=i-1;k<=n;k++){
					if(a[k]==b[k]){
						flag=true;
					}
				}
				if(flag==false){
					b[p++]=a[j];
				}else{
					for(int v=a[j];v<n;v++){
						b[v]=0;
					}
				}
			}
			bool bfl=false;
			for(int v=a[v];v<n;v++){
				if(a[v]!=0){
					bfl=true;
				}
			}
			flag1=bfl;
		}
		for(int h=1;h<=n;h++){
			sum[h]=b[h];
		}
		
		i++;
	} 
	for(int c=1;c<=m;c++){
		cout<<sum[c]<<" ";
	}
	return 0;
}
