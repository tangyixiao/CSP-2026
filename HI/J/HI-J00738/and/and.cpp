#include<bits/stdc++.h>
#include<cstdio>
#define ll long long
#define endl '\n'
long long q[200005];
bool cmp(int a,int b){
	return a>b;
}
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>q[i];
	}
	sort(q,q+n,cmp);
	//for(int i=0;i<200005;i++){
	//	cout<<q[i];
	//}
	int k=0;
	if(m==1)ans=q[0];
	else {
		for(int i=0;i<m-1;i++){
			long long z0=1;
			long long z1=1;
			if(k){
				k=0;
				continue;
			}
			while(z0<=q[i]){
				z0*=2;
			}
			z0/=2;
			while(z1<=q[i+1]){
				z1*=2;
			}
			z1/=2;
			if(z0==z1){
				ans=q[1+i]&q[i];
			}
			else {
				while(z0!=z1){
					q[i]-=z0;
					z0/=2;
				}
				if(q[i]<q[i+2]){
					ans=q[i+2]&q[i+1];
					k=1;
				}
				else {
					ans=q[i]&q[i+1];
				}
			}
		}
	}
	cout<<ans;
	//for(int i=0;i<m;i++){
	//	i
	//}
	fclose(stdin);
	fclose(stdout);
	return 0;
}


