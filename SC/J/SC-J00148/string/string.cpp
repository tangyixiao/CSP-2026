#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,d[200050];
char f[200050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>d[i]>>f[i];
	}long long i=1,j=n;
	while(i<j){
		if(i==j){
			break;
		}
		if(d[i]<d[j]){
			if(f[i]!=f[j]){
				ans+=d[i];
			}
			d[j]=d[j]-d[i];
			i++;
		}else if(d[i]>d[j]){
			if(f[i]!=f[j]){
				ans+=d[j];
			}
			d[i]=d[i]-d[j];
			j--;
		}else{
			if(f[i]!=f[j]){
				ans+=d[j];
			}j--;
			i++;
		}
	}cout<<ans; 
	return 0;
}