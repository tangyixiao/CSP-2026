#include <bits/stdc++.h>
using namespace std;
long long sz[500003],sz1[500003],zz[500003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,m,t=0;
	cin>>a>>m;
	for(int i=0;i<a;i++){
		cin>>sz[i];	
	}
	for(int l=0;l<a;l++){
		for(int i=l;i<a;i++){
			sz1[sz[i]]++;
			if(sz1[sz[i]]>1){
				t=i;
				for(int h=0;h<=500003;h++){
					sz1[h]=0;
				}
				sz1[sz[i]]=1;
			}
		}
		for(int i=0;i<=m;i++){
			if(sz1[i]==1){
				zz[i]++;
			}
		}
		for(int i=0;i<=500003;i++){
			sz1[i]=0;
		}
		t=0;
	}
	for(int i=1;i<=m;i++){
		cout<<zz[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}