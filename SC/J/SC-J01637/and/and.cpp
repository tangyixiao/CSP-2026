#include <iostream>
#include <stdio.h>
using namespace std;

int a[200005];
bool b[200005][35];



int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int sum[35]={};
	for(int i=1;i<=n;i++){
		int j=1;
		while(a[i]){
			b[i][35-j]=a[i]%2;
			sum[35-j]+=a[i]%2;
			a[i]/=2;
			j++;
		}
	}
	
	
	bool bj[200005]={};
	long long s=0;
	for(int i=1;i<35;i++){
		if(sum[i] >= m){
			for(int j=1;j<=n;j++){
				if(!bj[j] && !b[j][i]){
					bj[j]=1;
					for(int k=34;k>=1;k--){
						if(b[j][k]){
							b[j][k]=0;
							sum[k]--;
						}
					}
				}
				int p=1;
				for(int k=1;k<35-i;k++){
					p*=2;
				}
				s+=p;
			}	
		}
	}
	
	cout << s/n;	
	
	
	
	return 0;
}