#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout); 
	long long a,b,p[500005],d[300005];
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>p[i]; 
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(p[i]==j) d[j]++;
		}
	}
	d[p[a]]=a;
	for(int i=1;i<=b;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
