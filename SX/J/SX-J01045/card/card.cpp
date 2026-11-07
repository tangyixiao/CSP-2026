#include <bits/stdc++.h>
using namespace std;
int a[500005];
int d[500005];
int tong[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int N,M;
	cin>>N>>M;
	for (int i=0;i<N;i++){
		cin>>a[i];

	}
	for (int i=0;i<N;i++){
		for (int j=i;j<N;j++){
			int z=j;
			for(int n=0;n<j;n++){
				if (d[n]==a[j]){
					for (int m=n;m<j;m++){
						d[m]=0;

					}
					z=n;
					break;
				}
			}
			d[z]=a[j];

		}
		for(int i=0;i<=N;i++){
			tong[d[i]]++;
		}

	}
	for(int i=1;i<=M;i++){
		cout<<tong[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}