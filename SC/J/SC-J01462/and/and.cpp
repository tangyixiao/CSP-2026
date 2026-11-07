#include<bits/stdc++.h>
using namespace std;
long long m,n,a,ma;
long long b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>b[i];
	}
	if(m==2){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				a=b[i]&b[j];
				if(a>ma) ma=a;
			}
		}
	}
	if(m==3){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<n;k++){
					a=b[i]&b[j]&b[k];
					if(a>ma) ma=a;
				}
			}
		}
	}
	if(m==4){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<n;k++){
					for(long long c=k+1;c<n;c++){
						a=b[i]&b[j]&b[k]&b[c];
						if(a>ma) ma=a;
					} 
				}
			}
		}
	}
	if(m==5){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<n;k++){
					for(long long c=k+1;c<n;c++){
						for(long long d=c+1;d<n;d++){
							a=b[i]&b[j]&b[k]&b[c]&b[d];
							if(a>ma) ma=a;
						} 
					} 
				}
			}
		}
	}
	cout<<ma;
	return 0;
	fclose(stdin);
	fclose(stdout);
}