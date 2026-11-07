#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000001]={};
int v[1000001]={};
int b[1000001]={};
long long ans[1000001]={};
int ok(){
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(ok()==1){
		int a1[10000001]={};
		int v1[10000001]={};
		for(int i=1;i<=n;i++){
			v1[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			a1[i]=a1[i-1]+v1[i];
			cout<<a1[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int num=0;
		for(int j=i;j<=n;j++){
			num++;
			if(v[a[j]]==0){
				v[a[j]]=num;
				b[num]=a[j];
			}
			else{
				for(int k=v[a[j]]+1;k<=num;k++){
					v[b[k]]=0;
					b[k]=0;
				}
				num=v[a[j]];
			}
		}
		for(int j=1;j<=m;j++){
			if(v[j]!=0){
				ans[j]++;
			}
			v[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
