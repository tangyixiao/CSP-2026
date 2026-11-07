#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long int m,n,x,maxx=-123456789,sum=0;
	cin>>m>>n;
	for(long long int i=1;i<=m;i++){
		cin>>x;
		long long int y=0;
		while(x!=0){
			y=y*10+x%2;
			x/=2;
		}a[i]=y;
	}for(long long int i=1;i<=n;i++){
		for(long long int j=i;i<=n;j++){
			long long int sum=0;
			if(a[i]==a[j]){
				maxx=max(i,maxx);
				continue;
			}while(a[i]!=0&&a[j]!=0){
				if(a[i]%10!=a[j]%10){
					sum=sum*10+0;
				}else{
					sum=sum*10+1;
				}a[i]/=10;
				a[j]/=10;
			}maxx=max(maxx,sum);
		}
	}long long int cntcnt=0,am;
	while(maxx!=0){
		am=maxx%10;
		for(int i=0;i<cntcnt;i++){
			am*=2;
		}sum+=am;
		cntcnt++;
		maxx/=10;
	}cout<<sum;
	return 0;
}