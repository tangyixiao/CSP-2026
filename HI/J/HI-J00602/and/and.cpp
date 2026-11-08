#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	int max=-1;
	
	for(int i=1;i<=n-m;i++){
		int min;
		for(int j=i;j<=i+m;j++){
			if(min and a[j]){
				min=a[j];
			}else min=min;
		}
		if(min>max)max=min;
	}
	cout<<max;
	return 0;
}

