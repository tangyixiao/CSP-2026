#include<bits/stdc++.h>
using namespace std;
long long cards[500050];
long long arr[500050];
long long score[300030];
long long keys[300030];
long long n,m,t,as=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>cards[i];
	}
	for(t=0;t<n;t++){
		for(long long i=1;i<=m;i++){
			score[i]=0;
		}
		as=0;
		for(long long i=t;i<n;i++){
			if(score[cards[i]]==0){
				score[cards[i]]=1;
			}else{
				while(arr[as-1]!=cards[i]){
					as--;
					score[arr[as]]=0;
					arr[as]=0;
				}
				as--;
			}
			arr[as]=cards[i];
			as++;
		}
		for(long long i=0;i<as;i++){
			keys[arr[i]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<keys[i]<<' ';
	}
	return 0; 
}
