#include<bits/stdc++.h>
using namespace std;
long long n,m,a[60000],num[40000];
bool b[40000];
stack<int>z;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=1;
				z.push(a[j]);
			}else{
				while(z.top()!=a[j]){
					b[z.top()]=0;
					z.pop();
				}
			}
		}
		for(int i=1;i<=m;i++){
			num[i]+=b[i];
		}
		while(!z.empty()){
			b[z.top()]=0;
			z.pop();
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
