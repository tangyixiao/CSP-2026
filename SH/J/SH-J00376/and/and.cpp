#include<bits/stdc++.h>
using namespace std;
const int MAX_N=2e5+10;
int N,M;
int A[MAX_N],Ans=0,Ans2=0;
int K[MAX_N],S[MAX_N],L=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>N>>M;
	for(int i = 1;i<=N;i++){
		cin>>A[i];
		if(K[A[i]]==0){L++;S[L]=A[i];}
		K[A[i]]++;
	}
	sort(1+S,1+S+L);
	while(M>0){
		if(Ans==0){Ans=S[L];}
		Ans&=S[L];M-=K[S[L]];L--;
		if(K[S[L]]>=M){Ans2=max(Ans2,S[L]);}
	}
	cout<<max(Ans,Ans2);
}
