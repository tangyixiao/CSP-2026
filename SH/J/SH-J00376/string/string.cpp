#include<bits/stdc++.h>
using namespace std;
const int MAX_N=2e5+10;
int N;
long long Ans=0;
int A[MAX_N];
char K[MAX_N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>N;
	for(int i = 1;i<=N;i++){cin>>A[i]>>K[i];}
	int L=1,R=N;
	while(L<R){
		if(A[L]<A[R]){
			if(K[L]!=K[R]){
				Ans+=A[L];A[R]-=A[L];L++;
			}
			else{A[R]-=A[L];L++;}
		}
		else if(A[L]>A[R]){
			if(K[L]!=K[R]){
				Ans+=A[R];A[L]-=A[R];R--;
			}
			else{A[L]-=A[R];R--;}
		}
		else{
			if(K[L]!=K[R]){
				Ans+=A[L];A[L]-=A[L];A[R]-=A[R];L++;R--;
			}
			else{A[L]-=A[L];A[R]-=A[R];L++;R--;}
		}
	}
	cout<<Ans;
	return 0;
}
