#include<queue>
#include<bits/stdc++.h>
bool sfcx[300010];
long long js[300010];
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		queue<long long> aa;
		for(long long j=i-1;j<n;j++){
			if(sfcx[a[j]]==0){
				aa.push(a[j]);
				sfcx[a[j]]=1;
			}
			else{
				queue<long long> b;
				while(aa.front()!=a[j]){
					b.push(aa.front());
					aa.pop();
					if(aa.empty()){
						break;
					}
				}
				while(aa.empty()==0){
					aa.pop();
				}
				while(b.empty()==0){
					aa.push(b.front());
					b.pop();
				}
				aa.push(a[j]);
			}
		}
		while(aa.empty()==0){
			js[aa.front()]++;
			aa.pop();
		}
		for(long long i=0;i<=m;i++){
			sfcx[i]=0;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<js[i]<<" ";
	}
	return 0;
}
