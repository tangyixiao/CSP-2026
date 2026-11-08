#include<bits/stdc++.h>
using namespace std;
int n,m,w=0;
long long x[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	long long s=1;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	if(m==1){
		for(int i=0;i<n;i++){
			int z=x[i];
			w=max(w,z);
		}
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				int a=x[i],b=x[j];
				int c=a&b;
				w=max(w,c);
			}
		}
	}
	if(m==3){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					int a=x[i],b=x[j],c=x[q];
					int d=a&b&c;
					w=max(w,d);
				}
			}
		}
	}
	if(m==4){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						int a=x[i],b=x[j],c=x[q],d=x[e];
						int f=a&b&c&e;
						w=max(w,f);
					}
				}
			}
		}
	}
	if(m==5){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r];
							int g=a&b&c&e&f;
							w=max(w,g);
						}
					}
				}
			}
		}
	}
	if(m==6){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							for(int t=r+1;t<n;t++){
								int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r],g=x[t];
								int z=a&b&c&e&f&g;
								w=max(w,z);	
							}
						}
					}
				}
			}
		}
	}
	if(m==7){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							for(int t=r+1;t<n;t++){
								for(int y=t+1;y<n;y++){
									int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r],g=x[t],h=x[y];
									int z=a&b&c&e&f&g&h;
									w=max(w,z);	
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==8){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							for(int t=r+1;t<n;t++){
								for(int y=t+1;y<n;y++){
									for(int k=y+1;k<n;k++){
										int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r],g=x[t],h=x[y],l=x[k];
										int z=a&b&c&e&f&g&h&l;
										w=max(w,z);	
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==9){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							for(int t=r+1;t<n;t++){
								for(int y=t+1;y<n;y++){
									for(int k=y+1;k<n;k++){
										for(int o=k+1;o<n;o++){
											int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r],g=x[t],h=x[y],l=x[k],p=x[o];
											int z=a&b&c&e&f&g&h&l&p;
											w=max(w,z);	
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
	if(m==10){
		for(int i=0;i<n;i++){
			for(int j=1+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int e=q+1;e<n;e++){
						for(int r=e+1;r<n;r++){
							for(int t=r+1;t<n;t++){
								for(int y=t+1;y<n;y++){
									for(int k=y+1;k<n;k++){
										for(int o=k+1;o<n;o++){
											for(int v=o+1;v<n;v++){
												int a=x[i],b=x[j],c=x[q],d=x[e],f=x[r],g=x[t],h=x[y],l=x[k],p=x[o],u=x[v];
												int z=a&b&c&e&f&g&h&l&p&u;
												w=max(w,z);
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
	cout<<w;

	return 0;
}

