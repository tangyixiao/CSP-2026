#include<bits/stdc++.h>
using namespace std;
const int Max_N=2e5+10;
long long N,M;
long long Ans=0;
long long A[Max_N];
long long Bin[Max_N][100];
long long Cnt[Max_N];
bool Vis[Max_N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>N>>M;
	for(long long i=1;i<=N;i++){
		cin>>A[i];
		while(A[i]){
			Bin[i][Cnt[i]++]=A[i]%2;
			A[i]/=2;
		}
	}
	for(long long i=31;i>=0;i--){
		long long Now=0;
		for(long long j=1;j<=N;j++) if(!Vis[j]) Now+=Bin[j][i];
		if(Now>=M){
			Ans+=pow(2,i);
			for(long long j=1;j<=N;j++){
				if(!Bin[j][i]) Vis[j]=1;
			}
		}
	}
	cout<<Ans;
	return 0;
}

