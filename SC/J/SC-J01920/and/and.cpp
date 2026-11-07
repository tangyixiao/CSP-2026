#include<bits/stdc++.h>
using namespace std;
long long n,m;
bool b[100005];
long long v[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i];
		b[i]=1;
	}
	for(int i=1;i<=n-2;i++){
		if(v[i+1]>v[i]){
			b[i+1]=0;
		}
		if(v[i]>v[i+1]){
			b[i]=0;
		}
	}
	for(int i=1;i<=n-2;i++){
		if(v[i+1]<v[i]){
			b[i+1]=0;
		}
		if(v[i+1]>v[i]){
			b[i]=0;
		}
	}
	for(int i=1;i<=n;i++){
		if(b[i]){
			cout<<v[i];
			return 0;
		}
	}
}