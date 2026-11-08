#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
int a[200005];	
	int n=0,m=0,sum=0,ant=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+0,a+n);
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		
			 sum=(a[i]&a[j]);
			 
			 ant=sum;
				if(sum>ant){
				sum=ant;
			} 
		}
	}
	cout<<sum;
	return 0;
}

