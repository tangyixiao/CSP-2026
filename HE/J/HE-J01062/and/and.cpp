#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,max=-1,a[200010],x,mn;
	cin>>n>>m;
	if (m==n){
		cin>>mn;
		for (long long i=1;i<=n-1;i++){
			cin>>x;
			mn=(mn&x);
		}
		cout<<mn;
		return 0;
	}
	
	for (long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if (m==n-1){
		mn=a[1];
		for (int i=2;i<=n;i++){
			for (int j=2;j<=n;j++){
				if (i!=j){
					mn=mn&a[j];
				}
			}
			if (mn>max){
				max=mn;
			}
		}
		mn=a[2];
		for (int i=3;i<=n;i++){
			mn=mn&a[i];
			
		}
		if (mn>max){
			max=mn;
		}
		cout<<max;
		return 0;
	}
	if (m==2){
		for (int i=1;i<=n-1;i++){
			for (int j=i+1;j<=n;j++){
				if ((a[i]&a[j])>max){
					max=(a[i]&a[j]);
				}
			}
		}
	}
	
	if (m==3){
		for (int i=1;i<=n-2;i++){
			for (int j=i+1;j<=n-1;j++){
				for (int p=j+1;p<=n;p++){
					if ((a[i]&a[j]&a[p])>max){
						max=(a[i]&a[j]&a[p]);
					}
				}
			}
		}
	}
	if (m==4){
		for (int i=1;i<=n-3;i++){
			for (int j=i+1;j<=n-2;j++){
				for (int p=j+1;p<=n-1;p++){
					for (int o=p+1;o<=n;o++){
						if ((a[i]&a[j]&a[p]&a[o])>max){
							max=(a[i]&a[j]&a[p]&a[o]);
						}
					}
				}
			}
		}
	}
	if (m==5){
		for (int i=1;i<=n-4;i++){
			for (int j=i+1;j<=n-3;j++){
				for (int p=j+1;p<=n-2;p++){
					for (int o=p+1;o<=n-1;o++){
						for (int l=o+1;l<=n;l++){
							if ((a[i]&a[j]&a[p]&a[o]&a[l])>max){
								max=(a[i]&a[j]&a[p]&a[o]&a[l]);
							}
						}
					}
				}
			}
		}
	}
	cout<<max;
	return 0;
}
