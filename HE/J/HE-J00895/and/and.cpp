#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=0,sss=16382;
	cin>>n>>m;
	int a[n+5]={};
	int b[n+5]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(m==1){
		sort(a,a+n+5);
		cout<<a[n+4];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>mx){
					mx=a[i]&a[j];
				}
			}
		}
		cout<<mx;
	}
	if(m==3){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					if(a[i]&a[j]&a[q]>mx){
						mx=a[i]&a[j]&a[q];
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==4){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						if(a[i]&a[j]&a[q]>mx){
							mx=a[i]&a[j]&a[q]&a[w];
						}
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==5){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
							if(a[i]&a[j]&a[q]>mx){
								mx=a[i]&a[j]&a[q]&a[w]&a[e];
							}
						}
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==6){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
								for(int r=e+1;r<=n;r++){
								if(a[i]&a[j]&a[q]>mx){
									mx=a[i]&a[j]&a[q]&a[w]&a[e]&a[r];
								}
							}
						}	
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==7){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
							for(int r=e+1;r<=n;r++){
								for(int t=r+1;t<=n;t++){
									if(a[i]&a[j]&a[q]>mx){
										mx=a[i]&a[j]&a[q]&a[w]&a[e]&a[r]&a[t];
									}
								}
							}
						}	
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==8){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
							for(int r=e+1;r<=n;r++){
								for(int t=r+1;t<=n;t++){
									for(int y=t+1;y<=n;y++){
										if(a[i]&a[j]&a[q]>mx){
											mx=a[i]&a[j]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y];
										}
									}
								}
							}
						}	
					}
				}
			}
		}
		cout<<mx;
	}
	if(m==9){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
							for(int r=e+1;r<=n;r++){
								for(int t=r+1;t<=n;t++){
									for(int y=t+1;y<=n;y++){
										for(int u=y+1;u<=n;u++){
											if(a[i]&a[j]&a[q]>mx){
												mx=a[i]&a[j]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]&a[u];
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
		cout<<mx;
	}
	if(m==10){
		for(int q=1;q<=n;q++){
			for(int i=q+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int w=j+1;w<=n;w++){
						for(int e=w+1;e<=n;e++){
							for(int r=e+1;r<=n;r++){
								for(int t=r+1;t<=n;t++){
									for(int y=t+1;y<=n;y++){
										for(int u=y+1;u<=n;u++){
											for(int o=u+1;o<=n;o++){
												if(a[i]&a[j]&a[q]>mx){
													mx=a[i]&a[j]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]&a[u]&a[o];
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
		}
		cout<<mx;
	}
	return 0;
	
}
