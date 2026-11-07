#include<bits/stdc++.h>
using namespace std;
const int MAX_N=5e5+10;
const int MAX_M=3e5+10;
int N,M;
int A[MAX_N],Ans[MAX_M];
int K[MAX_M],Last[MAX_N],Next[MAX_N];//Next[i]:下一个i的位置
int Find(int X){
	if(Next[X]==0){return X;}
	return Find(Next[X]);
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>N>>M;
	for(int i = 1;i<=N;i++){
		cin>>A[i];
		if(K[A[i]]==0){Last[A[i]]=i;}
		else{Next[Last[A[i]]]=i;Last[A[i]]=i;}
		K[A[i]]++;
	}
	for(int i = 1;i<=N;i++){
		K[A[i-1]]--;
		int j=i;
		while(j<=N){
			if(K[A[j]]>=2){
				int L=Find(j);Ans[A[j]]++;j=L+1;
			}
			else{Ans[A[j]]++;j++;}
		}
	}
	for(int i = 1;i<=M;i++){
		cout<<Ans[i];
		if(i!=M){cout<<" ";}
	}
	return 0;
}
