#include<bits/stdc++.h>
using namespace std;
long long l[100000];
long long a[100000];
long long f[100000];
long long m,n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(f,-1,sizeof(f));
		long long d[100000];
		int head=0;
		for(int j=i;j<=n;j++){
			if(f[a[j]]!=-1){
				head=f[a[j]];
				d[head]=a[j];
				head++; 
			}
			else{
				f[a[j]]=head;
				d[head]=a[j];
				head++; 
			}
		}
		for(int j=0;j<head;j++)l[d[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<l[i]<<" ";
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
