#include<bits/stdc++.h>
using namespace std;
int n,m; 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	cin>>n>>m;
	int a[n+1];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	if (m==1){
		sort(a,a+n);
		cout<<a[n-1]<<'\n';
	}
	else if (m==n){
		sort(a,a+n);
		cout<<a[n]<<'\n';
	}
	else if (m==2){
		int mm=0;
		for (int i=0;i<n;i++){
			for (int j=i;j<n;j++){
				if (a[i]&a[j]>mm) mm=a[i]&a[j];
			}
		}
		cout<<mm-1<<'\n';
	}
	else{
		sort(a,a+n);
		cout<<a[n-m]<<'\n';
	}
	
	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
