#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005],sum,cnt,p; 
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int x=1;
	int y=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	sum=sum/2;
	while(sum>0){
		if(sum>=a[x]){
			sum=sum-a[x];
			while(a[x]>0){
				if(a[x]>=a[y]){
					if(b[x]!=b[y]){
						cnt=cnt+a[y];
					}
					a[x]-=a[y];
					a[y]=0;
					y=y-1;
				}else{
					if(b[x]!=b[y]){
						cnt=cnt+a[x];
					}
					a[x]=0;
					a[y]-=a[x];
				}
			}
			x=x+1;
		}else{
			p=sum;
			sum=0;
			a[x]=a[x]-p;
			while(p>0){
				if(p>=a[y]){
					if(b[x]!=b[y]){
						cnt=cnt+a[y];
					}
					p=p-a[y];
					y--;
				}else{
					if(b[x]!=b[y]){
						cnt=cnt+p;
					}
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
