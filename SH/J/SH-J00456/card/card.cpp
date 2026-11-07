#include<bits/stdc++.h>
using namespace std;
int f[500010],l[500010],a[300010],s[300010],q[300010],Q[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[l[a[i]]]=i;
		l[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		f[i]=l[a[i]];
	}
	if(n>5000){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				cnt++;
			}
			s[a[i]]=cnt;
		}
		for(int i=1;i<=m;i++){
			cout<<s[i]<<" ";
		}
		return 0; 
	}
	for(int i=n;i>=1;i--){
		int j=i;
		while(j<=n){
			q[a[j]]++;
			if(f[j]!=0){
				j=f[j];
			}
			j++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<q[i]<<" ";
	}
	return 0;
} 
