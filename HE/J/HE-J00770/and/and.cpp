#include<bits/stdc++.h>
using namespace std;

long long int num[31][200010]={0};
int co[31]={0};
int ans[31]={0};
int ok[200010]={1};
int t[200010]={0};
int n,m,a[200010]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long int pow[31]={2};
	cin>>n>>m;

	for(int i=1;i<31;i++){
		pow[i]=pow[i-1]*2;
	}
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<31;j++){
			if(a[i]<pow[j]){
				num[j][co[j]]=a[i];co[j]++;
				break;
			}
		}
	}
	int maxb=31;
	for(int i=31;i>=0;i--){
		if(co[i]>m){
			maxb=i;
			break;
		}
	}
	ans[maxb]=1;
	for(int j=maxb+1;j<31;j++){
		for(int k=0;k<co[j];k++){
			num[maxb][co[maxb]]=num[j][k]%pow[maxb];
		}
	}
	for(int i=maxb;i>=0;i--){
		for(int j=0;j<co[maxb];j++){
			if(num[maxb][j]%pow[i]-pow[i]/2>=0){
				t[i]++;
			}
		}
		if(t[i]>=m){
			ans[i]=1;
			for(int j=0;j<co[maxb];j++){
				if(num[maxb][j]%pow[i]-pow[i]/2<0){
					num[maxb][j]=0;
				}
			}		
		}
	}
	int cou=0;
	for(int i=0;i<31;i++){
		cou+=ans[i]*pow[i];
	}
	cout<<cou/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
