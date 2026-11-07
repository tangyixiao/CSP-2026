#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005]={0},b[500005]={-1},w[500005]={0};
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	};
	long long ik=1;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=ik;k++){
				if(a[j]==b[k]){
					while(s.top()!=a[j]){
						s.pop();
					}
					s.pop();
					b[k]=-1;
				}
			}
			b[ik]=a[j];
			ik++;
			s.push(a[j]);
		}
		ik=1;
		memset(b,-1,sizeof(b));
		while(!s.empty()){
			w[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<w[i]<<' ';
	}
	return 0; 
} 
