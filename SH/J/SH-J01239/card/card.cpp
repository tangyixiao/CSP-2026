#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
long long n,m;
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout); 
	std::cin>>n>>m;
	long long dist[n];
	for(long long i=0;i<n;i++){
		std::cin>>dist[i];
	}
	long long cnt[m];
	memset(cnt,0,sizeof(cnt)+1);
	for(long long i=0;i<n;i++){
		bool card[m];
		memset(card,0,sizeof(card)+1);
		for(long long j=i;j<n;j++){
			if(card[dist[j]-1]!=1){
				card[dist[j]-1]=1;
			}
			else{
				long long flag=0;
				for(long long k=j-1;k>0;k--){
					if(dist[k]==dist[j]){
						flag=k;
						break;
					}
				}
				for(long long k=flag;k<j;k++){
					card[dist[k]-1]=0;
				} 
				card[dist[j]-1]=1;
				/*for(int k=0;k<m;k++){
					std::cout<<card[k]<<std::endl;
				}*/
			}
			
		}
		/*for(int k=0;k<m;k++){
					std::cout<<card[k]<<std::endl;
				}*/
		for(long long j=0;j<m;j++){
			if(card[j]==1){
				cnt[j]++;
			}
		}
	}
	for(long long i=0;i<m;i++){
		std::cout<<cnt[i]<<" ";
	} 
	std::cout<<std::endl;
	return 0;
}
