#include<bits/stdc++.h>
using namespace std;
int n,a,sum=1,cont;
char c,a1[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=sum;j<a+sum;j++){
			a1[j]=c;
		}
		sum+=a;
	}
	sum--;
	for(int i=1;i<=sum/2;i++){
		if(a1[i]!=a1[sum+1-i]){
			cont++;
		}
	}
	cout<<cont;
	return 0;
}