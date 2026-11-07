#include<bits/stdc++.h>
using namespace std;

const long long N = 2e5+10;
long long n,m;
long long a[N];
long long cnt[35];
bool bin[N][35],del[N];

void init(long long id,long long x){
	long long len=0;
	while(x){
		len++;
		if(x & 1){
			bin[id][len]=true;
			cnt[len]++;
		}
		x>>=1;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		
		init(i,a[i]);
	}
	
	
	for(long long i=31;i>=1;i--){
		if(cnt[i]>=m){
			
			for(long long j=1;j<=n;j++){
				
				if(!bin[j][i] && !del[j]){
					
					del[j]=true;
					for(long long k=1;k<=31;k++) cnt[k] -= bin[j][k];
					
				}
				
			}
			
		}
	}
	
	long long res = (1LL<<31)-1;
	for(long long i=1;i<=n;i++){
		if(!del[i]) res &= a[i];
	}
	cout<<res;
	
	return 0;
}
/*
 4 2
 3 15 12 12
*/