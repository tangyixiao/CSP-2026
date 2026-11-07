#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	long long int maxx=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(maxx<a[i]){
				maxx=a[i];
			}
		}
		cout<<maxx;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxx){
					maxx=(a[i]&a[j]);
				}
			}
		}
		cout<<maxx;
	}
	if(m==3){
		for(int i=1;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<=n;k++){
					if((a[i]&a[j]&a[k])>maxx){
						maxx=(a[i]&a[j]&a[k]);
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==4){
		for(int i=1;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					for(int p=k+1;p<=n;p++){
						if((a[i]&a[j]&a[k]&a[p])>maxx){
							maxx=(a[i]&a[j]&a[k]&a[p]);
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==5){
		for(int i=1;i<n-3;i++){
			for(int j=i+1;j<n-2;j++){
				for(int k=j+1;k<n-1;k++){
					for(int p=k+1;p<n;p++){
						for(int q=p+1;q<=n;q++){
							if((a[i]&a[j]&a[k]&a[p]&a[q])>maxx){
								maxx=(a[i]&a[j]&a[k]&a[p]&a[q]);
							}
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==6){
		for(int i=1;i<n-4;i++){
			for(int j=i+1;j<n-3;j++){
				for(int k=j+1;k<n-2;k++){
					for(int p=k+1;p<n-1;p++){
						for(int q=p+1;q<n;q++){
							for(int w=q+1;w<=n;w++){
								if((a[i]&a[j]&a[k]&a[p]&a[q]&a[w])>maxx){
									maxx=(a[i]&a[j]&a[k]&a[p]&a[q]&a[w]);
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==7){
		for(int i=1;i<n-5;i++){
			for(int j=i+1;j<n-4;j++){
				for(int k=j+1;k<n-3;k++){
					for(int p=k+1;p<n-2;p++){
						for(int q=p+1;q<n-1;q++){
							for(int w=q+1;w<n;w++){
								for(int e=w+1;e<=n;e++){
									if((a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e])>maxx){
										maxx=(a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==8){
		for(int i=1;i<n-6;i++){
			for(int j=i+1;j<n-5;j++){
				for(int k=j+1;k<n-4;k++){
					for(int p=k+1;p<n-3;p++){
						for(int q=p+1;q<n-2;q++){
							for(int w=q+1;w<n-1;w++){
								for(int e=w+1;e<n;e++){
									for(int r=e+1;r<=n;r++){
										if((a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e]&a[r])>maxx){
											maxx=(a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e]&a[r]);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	if(m==9){
		for(int i=1;i<n-7;i++){
			for(int j=i+1;j<n-6;j++){
				for(int k=j+1;k<n-5;k++){
					for(int p=k+1;p<n-4;p++){
						for(int q=p+1;q<n-3;q++){
							for(int w=q+1;w<n-2;w++){
								for(int e=w+1;e<n-1;e++){
									for(int r=e+1;r<n;r++){
										for(int t=r+1;t<=n;t++){
											if((a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e]&a[r]&a[t])>maxx){
												maxx=(a[i]&a[j]&a[k]&a[p]&a[q]&a[w]&a[e]&a[r]&a[t]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<maxx;
	}
	return 0;
}
