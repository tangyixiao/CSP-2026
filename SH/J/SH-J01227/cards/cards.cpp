#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
struct kards{
	int sum,pos;
}finds[N];
int n,m,card[N],put[N],ci[N],cnt;
int main(){
	freopen("cards.in","r",stdin);
	freopen("cards.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			put[j]=0;
		} 
		for(int j=1;j<=m;j++){
			finds[j].sum=0;
			finds[j].pos=0;
		}
		if(i==n){
			ci[card[n]]++; 
		}else{
			cnt=0;
			for(int j=i;j<=n;j++){
				if(finds[card[j]].sum!=1){
					cnt++;
					put[cnt]=card[j];
					finds[card[j]].sum=1;
					finds[card[j]].pos=cnt;
				}else{
					cnt=finds[card[j]].pos;
					for(int k=j+1;k<=cnt;k++){
						finds[card[j]].sum=0;
						finds[card[j]].pos=0;	
					}
				}
			}
			for(int j=1;j<=cnt;j++){
				ci[put[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ci[i]<<" ";
	}
	return 0;
} 
