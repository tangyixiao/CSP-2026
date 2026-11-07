#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],j,k,p=-1;
long long ans=0;
char l,c[200005];
signed main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	j=n;
	int i=1;
	while(1){
		if(k!=0){
			//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<ans<<endl;
			if(p==1){
				if(k>a[j]){
					k-=a[j];
					if(c[j]!=l){
						ans+=a[j];
					}
					j--;
				}else if(k<a[j]){
					if(l!=c[j]){
						ans+=k;
					}
					i++;
					k=a[j]-k;
					l=c[j];
					p=0;
				}else{
					if(l!=c[j]){
						ans+=a[j];
					}
					p=-1;
					k=0;
					j--;
					i++;
				}
			}else{
				if(k>a[i]){
					k-=a[i];
					if(c[i]!=l){
						ans+=a[i];
					}
					i++;
				}else if(k<a[i]){
					if(l!=c[i]){
						ans+=k;
					}
					p=1;
					j--;
					k=a[i]-k;
					l=c[i];
				}else{
					if(l!=c[i]){
						ans+=a[i];
					}
					p=-1;
					k=0;
					j--;
					i++;
				}
			}
			//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<ans<<endl;
		}else{
			if(a[i]==a[j]){
				if(c[i]==c[j]){
					i++;
					j--;
					continue;
				}else{
					ans+=a[i];
					i++;
					j--;
				}
				//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<ans<<endl;
			}else{
				if(a[i]>a[j]){
					if(c[i]==c[j]){
						k=a[i]-a[j];
						l=c[i];
					}else{
						ans+=a[j];
						k=a[i]-a[j];
						l=c[i];	
					}
					p=1;
					j--;
				}else{
					if(c[i]==c[j]){
						k=a[j]-a[i];
						l=c[j];
					}else{
						ans+=a[i];
						k=a[j]-a[i];
						l=c[j];	
					}
					p=0;
					i++;
				}
				//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<ans<<endl;
			}
		}
		if(i>=j){
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
aaccbbc
aa cc bb c
4
2 a
2 c
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b



*/