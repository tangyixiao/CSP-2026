#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],s[300010],z[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int k=i;
		while(k<=n){
			if(z[a[k]]>k) k=z[a[k]];
			else{
				s[a[k]]++;
				k++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<s[i]<<" ";
	return 0;
}
