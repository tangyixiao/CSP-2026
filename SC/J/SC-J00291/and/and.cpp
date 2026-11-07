#include<bits/stdc++.h>
using namespace std;
int c[20005][32];
int sum[32],book[32];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long total=0;
	cin>>n>>m;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		int j=0;
		while(a>=1){
			c[i][j]=a-a/2*2;
			a=a/2;
			j++;
		}
 	}
 	int s=31;
 	while(s>=0){	
		for(int i=0;i<n;i++){
			if((c[i][s]==1)&&(book[i]!=-1)){
				sum[s]++;
			}
		}
		if(sum[s]>=m){
			for(int i=0;i<n;i++){
				if(c[i][s]==0){
					book[i]=-1;
				}
			}
		}
		s--;
	}
	for(int i=0;i<30;i++){
		sum[i]=0;
	}
	int q=1;
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if((c[i][j]==1)&&(book[i]!=-1)){
				sum[j]++;
			}
		}
		if(sum[j]>=m){
			total=total+q;
		}
		q=q*2;
	}
	cout<<total;
	fclose(stdin);
	fclose(stdout);
	return 0;
}