#include<bits/stdc++.h>
using namespace std;
long long a[3000001],b[3000001],s[3000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		int x=0;
		for(int j=1;j<=i;i++){
			if(b[j]==0)b[j]=b[i];x=b[j];b[i]=0;
		}
		for(int j=1;j<i;j++){
			if(b[j]==x){
				for(int k=j;k<=n;k++){
					b[k]=0;
				}b[j]=x;
			}
		}
		for(int j=1;j<=m;j++){
			if()
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
