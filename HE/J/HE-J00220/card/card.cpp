#include<bits/stdc++.h>
using namespace std;
int a[1000000],st[1000000],sum[1000000],l=0;
int pd(long long x){
	for(int i=0;i<l;i++){
		if(st[i]==x){
			return i;
		}
	}
	return -1;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cont=0;cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(cont<=n){
		for(int i=0;i<l;i++){
			st[i]=0;
		}
		l=0;
		cont++;
		for(int i=cont-1;i<n;i++){
			int o=pd(a[i]);
			if(o==-1){
				st[l++]=a[i];
			}
			else{
				for(int j=o;j<l;j++){
					st[j]=0;
				}
				st[o]=a[i];
			}
		}
		for(int i=0;i<l;i++){
			sum[st[i]]++;
		}
	}
	for(int i=1;i<m;i++){
		cout<<sum[i]<<" ";
	}cout<<sum[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
