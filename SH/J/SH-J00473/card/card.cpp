#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	int card[n+1];
	int fast[n+1];
	for(int i=1;i<=n;i++){
		cin>>card[i];
		fast[card[i]]=i;
	}
	
	int sum[m+1]={0};
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int num=card[j];
			sum[num]++;
			j=fast[num];
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}
