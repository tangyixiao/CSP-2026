#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int a[500005];
int las[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		las[a[i]]=i;
	} 
	int flag=1;
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]) flag=0;
	}
	if(flag==1){
		for(int i=1;i<=m;i++) cout<<las[i]<<" ";
	}
	return 0;
}
