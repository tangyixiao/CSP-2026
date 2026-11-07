#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005],c[1000005],b[1000005];
stack <int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(b[k]==0){
			s.push(k);
			b[k]++;
			}
			else {
				while(s.top()!=k){
					b[s.top()]=0;
					s.pop();
				}
			}
	}
	while(!s.empty()){
		c[s.top()]++;
		s.pop();
	}
	for(int j=1;j<=m;j++){
		b[j]=0;
	}
	}
	for(int i=1;i<=m;i++){
	printf("%d ",c[i]);	
	}
	return 0;
}
