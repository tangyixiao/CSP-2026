#include<bits/stdc++.h>
using namespace std;
int n;
long long ans=0;
struct node{
	int a;
	char c;
}st[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool a1=0;
	for(int i=1;i<=n;i++){
		cin>>st[i].a>>st[i].c;
		if(st[i].c!=st[i-1].c) a1=1;
	} 
	if(a1==0){
		cout<<0;
		return 0;
	}
	else if(n==2){
		ans+=min(st[1].a,st[2].a);
		cout<<ans;
		return 0;
	}
	int j=n;
	int i=1;
	while(i<j){
		if(st[i].c!=st[j].c){
			if(st[i].a!=st[j].a){
				int x=0,k;
				if(st[i].a>st[j].a){
					k=j;
					int flag=0;
					for( ;k>i;k--){
						x+=st[k].a;
						if(st[k].c==st[i].c){
							ans-=st[k].a;
							flag++;
						} 
						if(x>=st[i].a){
							if(x==st[i].a){
								j=k-1;
								ans+=st[i].a;
							} 
							else{
								j=k;
								if(flag>=1) ans+=x;
								else ans+=st[i].a;
							} 
							st[k].a-=x-st[i].a;
							break;
						}else if(k==i+1){
							ans+=x;
							j=k-1;
							break;
						}
					}	
				} 
				else{
					k=i;
					int flag=0;
					for( ;k<j;k++){
						x+=st[k].a;
						if(st[k].c==st[j].c){
							ans-=st[j].c;
							flag++;
						} 
						if(x>=st[j].a){
							if(x==st[j].a){
								i=k+1;
								ans+=st[j].a;
							} 
							else{
								i=k;
								if(flag>=1) ans+=x;
								else ans+=st[j].a;
							} 
							st[k].a-=x-st[j].a;
							break;
						}else if(k==j-1){
							ans+=x;
							i=k+1;
							break;
						}	
					}
				} 
			}else{
				ans+=st[i].a;
				i++;
				j--;
			}	
		}else if(st[i].c==st[j].c&&st[i].a!=st[j].a){
			int k,x=0;
			if(st[i].a>st[j].a){
				int flag=0;
				for(k=j;k>i;k--){
					x+=st[k].a;
					if(st[k].c==st[i].c){
						ans-=st[k].a;
						flag++;
					} 
					if(x>=st[i].a){
						if(x==st[i].a){
							j=k-1;
							ans+=st[i].a;
						}
						else{
							j=k;
							if(flag>=2) ans+=x;
							else ans+=st[i].a;
						}
						st[k].a-=x-st[i].a;
						break;
					}else if(k==i+1){
						ans+=x;
						j=k-1;
						break;
					}
				}
			}
			else{
				int flag=0;
				for(k=i;k<j;k++){
					x+=st[k].a;
					if(st[k].c==st[j].c){
						ans-=st[k].a;
						flag--;
					}
					if(x>=st[j].a){
						if(x==st[j].a){
							i=k+1;
							ans+=st[j].a;
						}
						else{
							i=k;
							if(flag>=2) ans+=x;
							else ans+=st[j].a;
						}
						st[k].a-=x-st[j].a;
						break;
					}else if(k==j-1){
						ans+=x;
						i=k+1;
						break;
					}
				}
			}
		}else{
			i++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}
