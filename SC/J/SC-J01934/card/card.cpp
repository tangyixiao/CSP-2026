#include<bits/stdc++.h>
using namespace std;
const long long N=3e5+5;
long long a,s,d,f,A[N],ans[N],D[N];
deque<long long>S;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>s;
	for(long long i=1;i<=a;i++){
		cin>>A[i];
	}
	for(long long i=a;i>=1;i--){
		while(S.size()){
			S.pop_front();
		}
		for(long long j=i;j<=a;j++){
			if(D[A[j]]==1){
				while(S.front()!=A[j]){
					D[S.front()]=0;
					S.pop_front();
				}
				S.pop_front();
			}
			D[A[j]]=1;
			S.push_front(A[j]);
		}
		for(long long j=1;j<=s;j++){
			ans[j]+=D[j];
			//cout<<D[j]<<" ";
			D[j]=0;
		}
		//cout<<endl;
	}
	for(long long i=1;i<=s;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}