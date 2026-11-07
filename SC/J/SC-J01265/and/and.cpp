#include <bits/stdc++.h>
using namespace std;
int n,m,ans=-1;
int a[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int a1=1;a1<=n;a1++){
		scanf("%d",&a[a1]);
	}
	if(m==1){
		for(int a1=1;a1<=n;a1++){
			ans=max(ans,a[a1]);
		}
	}
	if(m==2){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				ans=max(ans,a[a1]&a[a2]);
			}
		}
	}
	if(m==3){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					ans=max(ans,a[a1]&a[a2]&a[a3]);
				}
			}
		}
	}
	if(m==4){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]);
					}
				}
			}
		}
	}
	if(m==5){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						for(int a5=1;a5<=n;a5++){
							if(a1==a5||a2==a5||a3==a5||a4==a5) continue;
							ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]);
						}
					}
				}
			}
		}
	}
	if(m==6){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						for(int a5=1;a5<=n;a5++){
							if(a1==a5||a2==a5||a3==a5||a4==a5) continue;
							for(int a6=1;a6<=n;a6++){
								if(a1==a6||a2==a6||a3==a6||a4==a6||a5==a6) continue;
								ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]);
							}
						}
					}
				}
			}
		}
	}
	if(m==7){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						for(int a5=1;a5<=n;a5++){
							if(a1==a5||a2==a5||a3==a5||a4==a5) continue;
							for(int a6=1;a6<=n;a6++){
								if(a1==a6||a2==a6||a3==a6||a4==a6||a5==a6) continue;
								for(int a7=1;a7<=n;a7++){
									if(a1==a7||a2==a7||a3==a7||a4==a7||a5==a7||a6==a7) continue;
									ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]);
								}
							}
						}
					}
				}
			}
		}
	}
	if(m==8){
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						for(int a5=1;a5<=n;a5++){
							if(a1==a5||a2==a5||a3==a5||a4==a5) continue;
							for(int a6=1;a6<=n;a6++){
								if(a1==a6||a2==a6||a3==a6||a4==a6||a5==a6) continue;
								for(int a7=1;a7<=n;a7++){
									if(a1==a7||a2==a7||a3==a7||a4==a7||a5==a7||a6==a7) continue;
									for(int a8=1;a8<=n;a8++){
										if(a1==a8||a2==a8||a3==a8||a4==a8||a5==a8||a6==a8||a7==a8) continue;
										ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]);
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
		for(int a1=1;a1<=n;a1++){
			for(int a2=1;a2<=n;a2++){
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++){
					if(a1==a3||a2==a3) continue;
					for(int a4=1;a4<=n;a4++){
						if(a1==a4||a2==a4||a3==a4) continue;
						for(int a5=1;a5<=n;a5++){
							if(a1==a5||a2==a5||a3==a5||a4==a5) continue;
							for(int a6=1;a6<=n;a6++){
								if(a1==a6||a2==a6||a3==a6||a4==a6||a5==a6) continue;
								for(int a7=1;a7<=n;a7++){
									if(a1==a7||a2==a7||a3==a7||a4==a7||a5==a7||a6==a7) continue;
									for(int a8=1;a8<=n;a8++){
										if(a1==a8||a2==a8||a3==a8||a4==a8||a5==a8||a6==a8||a7==a8) continue;
										for(int a9=1;a9<=n;a9++){
											if(a1==a9||a2==a9||a3==a9||a4==a9||a5==a9||a6==a9||a7==a9||a8==a9) continue;
											ans=max(ans,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]);
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
	printf("%d",ans);
	return 0;
}