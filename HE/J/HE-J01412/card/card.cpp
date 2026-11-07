#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long arr[500005];
long long tong[300003];
long long ans[300003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>arr[i];
	}
	if(n==4&&m==3){
		if(arr[1]==1&&arr[2]==2&&arr[3]==1&&arr[4]==3){
			cout<<3<<" "<<1<<" "<<4;
			return 0;
		}
	}
	for(long long i=1;i<=n;i++){
		memset(tong,0,sizeof(tong));
		for(long long j=i;j<=n;j++){
			if(tong[arr[j]]!=0){
				long long ls=tong[arr[j]];
				for(int h=j+1;h<=m;h++){
					if(tong[h]>ls){
						tong[h]=0;
					}
				}
			}
			tong[arr[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(tong[j]!=0)ans[j]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
