#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	int N,g;
	cin>>N>>g;
	int a[N];
	int cut=0;
	int b=0;

	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	for(int i=0;i<=N;i++){
		for(int j=0;j<N;j++){
			int gen;
			if(a[j]>a[j+1]){
				int gen=a[j];
				a[j]=a[j+1];
				a[j+1]=gen;
			}
			}
		}
	for(int i=0;i<N-1;++i){
		for(int j=0;j<=i;++j){
		cut+=a[j+1]-a[j];
		int ccut=a[j+1]-a[j];
		a[j]=a[j]+ccut;
		
		}
		
		if(cut<=g)b+=1;
		
	
	}
	cout<<b;
	return 0;
} 

