#include<bits/stdc++.h>
using namespace std;
int sum=0,z;
int l=2;
long long n,m,a[2000000],b[200000][200000],c[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		z=a[i];
		while(z>=0){
			int q=1;
			b[i][q]=z%2;
			z=z/2;
			q++;
		}
	}
	for(int i=1;i<=m;i++){
		int z=1;
		for(int j=1;i<=m;j++){
			if(b[j][z] != b[j+1][z]){
				c[j]=0;
			}
			else c[j]=1;
			z++;
		}
		
	}
	for(int i=1;i<=z;i++){
		for(int j=z;j>=0;j--){
			l=l*2;
		}
		sum=c[i]*l+sum;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
