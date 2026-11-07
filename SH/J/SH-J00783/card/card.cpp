#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n;
	long long m;
	cin>>n>>m;
	long long a[100010]={0};
	long long c[5010]={0};
	for(int x=1;x<=n;x++){
		cin>>a[x];
	}
	for(int i=1;i<=n;i++){
		long long b[100010]={0};
		b[1]=a[i];
		for(int x=2;x<=n;x++){
			b[x]=a[x+i-1];
			for(int y=1;y<x;y++){
				if(b[x]==b[y]){
					for(int z=y+1;z<=x;z++){
						b[z]=0;
					}
				}
			}
		}
		for(int w=1;w<=n;w++){
			for(int v=1;v<=m;v++){
				if(b[w]==v){
					c[v]++;
				}
			}
		}
	}
	for(int x=1;x<=m;x++){
		cout<<c[x]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
