#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
int pos[100000005];
void shanchu(int a[],int f,int l){
	for(int i=1;i<=l-f;i++){
		a[f+i]=a[l+i];
	}
	return a;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int g[n+5];
	int b[100005];
	for(int i=1;i<=n;i++){
		cin>>g[i];
	}
	for(int i=1;i<=n;i++){
		a[b[i]]++;
		if(a[b[i]]==2){
			shanchu(g[],)
		}
	}
	return 0;
} 
