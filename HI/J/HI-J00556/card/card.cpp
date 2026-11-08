#include<bits/stdc++.h> 
using namespace std;
const int N=2e7+9;
long long n,m,k;
int a[N],b[N];
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	queue<long long>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		k++;
		for(int j=1;j<=k;j++){
			if(a[i]==a[j]){
				for(int k=i;k<+j;k++){
					a[k]=0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	return 0;
}
