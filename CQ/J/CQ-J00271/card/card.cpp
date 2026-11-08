#include<bits/stdc++.h>
using namespace std;
long long n,m,a[5000005],z[5000005];
deque<long long >q;
char b[5000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	long long k=n;
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			if(b[a[i]]==0){
				q.push_back(a[i]);
				b[a[i]]=1;
			}
			else{
				while(!q.empty()&&q.back()!=a[i]){
					long long j=q.back();
					q.pop_back();
					b[j]=0;
				}
				q.pop_back();
				q.push_back(a[i]);
			}
		}
		while(!q.empty()){
			long long j=q.front();
			b[j]=0;
			q.pop_front();
			z[j]++;
	}
}
	for(int i=1;i<=m;i++)cout<<z[i]<<' ';
	return 0;
} 
