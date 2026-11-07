#include<bits/stdc++.h>
using namespace std;
long long N;
long long Len=0;
long long A[1000000];
char c[1000000]; 
long long Ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>N;
	for(long long i=1;i<=N;i++){
		cin>>A[i]>>c[i];
		Len+=A[i];
	}
	long long l=1,r=N;
	while(l<r){
		if(A[l]<A[r]){
			if(c[l]!=c[r]) Ans+=A[l];
			A[r]-=A[l];
			l++;
		} 
		if(A[l]>A[r]){
			if(c[l]!=c[r]) Ans+=A[r];
			A[l]-=A[r];
			r--;
		}
		if(A[l]==A[r]){
			if(c[l]!=c[r]) Ans+=A[l];
			l++,r--;
		}
	}
	cout<<Ans;
	return 0;
}
