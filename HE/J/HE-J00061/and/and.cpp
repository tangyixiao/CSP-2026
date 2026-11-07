#include <bits/stdc++.h>
using namespace std;
const int MaxN=2e5+5;
int n,k,smax;
int a[MaxN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> k;

	for(int i=0;i<n;i++) cin >> a[i];

	if(k==1){
		sort(a,a+n);
		cout << a[n-1];
	}

	else if(k==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int nowmax=a[i]&a[j];
				if(nowmax>smax) smax=nowmax;
			}
		}
	}

	else if(k==3){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int i1=j+1;i1<n;i1++){
						int nowmax=a[i]&a[j]&a[i1];
						if(nowmax>smax) smax=nowmax;
				}
			}
		}
	}

	else if(k==4){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int i1=j+1;i1<n;i1++){
					for(int j1=i1+1;j1<n;j1++){
						int nowmax=a[i]&a[j]&a[i1]&a[j1];
						if(nowmax>smax) smax=nowmax;
					}
				}
			}
		}
	}

	else if(k==5){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int i1=j+1;i1<n;i1++){
					for(int j1=i1+1;j1<n;j1++){
						for(int i2=j1+1;i2<n;i2++){
							int nowmax=a[i]&a[j]&a[i1]&a[j1]&a[i2];
							if(nowmax>smax) smax=nowmax;
						}
					}
				}
			}
		}
	}

	else if(k==7){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int i1=j+1;i1<n;i1++){
					for(int j1=i1+1;j1<n;j1++){
						for(int i2=j1+1;i2<n;i2++){
							for(int i3=i2+1;i3<n;i3++){
								for(int i4=i3+1;i4<n;i4++){
									int nowmax=a[i]&a[j]&a[i1]&a[j1]&a[i2]&a[i3]&a[i4];
									if(nowmax>smax) smax=nowmax;
								}
							}
						}
					}
				}
			}
		}
	}

	cout << smax;
	return 0;
}
