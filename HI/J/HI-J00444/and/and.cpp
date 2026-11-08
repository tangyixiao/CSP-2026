#include<bits/stdc++.h>
using namespace std;
long long a[20000005],c[20000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long maxn=-9999;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		a[b]++;
		if(b>maxn){
			maxn=b;
		}
	}
	int t=1,fal=0;
	for(int i=maxn;i>=1;i--){
		if(a[i]!=0){
			if(m>a[i]){
				for(int j=1;j<=a[i];j++){
					c[t]=i;
					fal=i;
					t++;
				}
				m-=a[i];
			}else{
				for(int j=1;j<=m;j++){
					c[t]=i;
					fal=i;
					t++;
				}
				break; 
			}
		}
	}
	cout<<fal;
	return 0; 
} 
