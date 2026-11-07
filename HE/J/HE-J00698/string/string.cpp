#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long sum;
	char s;
}a[200001];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		a[i].sum=x;
		a[i].s=y;
	}
	int j=n;
	int i=1;
	while(i<j){
		if(a[i].s==a[j].s){
			if(a[i].sum!=a[j].sum&&abs(i-j)!=1){
				ans+=min(a[i].sum,a[j].sum);
			}
		}
		else{
			if(a[i].sum==a[j].sum){
				ans+=a[i].sum;
			}
			else if(a[i].sum>a[j].sum){
				long long m=0;
				long long h=j;
				for(long long k=h;k>i;k--){
					if(m<a[i].sum){
						ans+=min(a[j].sum,abs(m-a[i].sum));
						m+=a[j].sum;
						j--;
					}
					else{
						break;
					}
				}
			}
			else{
				long long m=0;
				long long h=i;
				for(long long k=h;k<j;k++){
					if(m<a[j].sum){
						ans+=min(abs(m-a[j].sum),a[i].sum);
						m+=a[i].sum;
						i++;
					}
					else{
						break;
					}             
				}
			}
		}
		j--;
		i++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
