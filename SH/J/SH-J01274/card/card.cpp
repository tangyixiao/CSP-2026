#include<bits/stdc++.h>
using namespace std;
long long to[3010];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,b[200010];
	vector<long long> a;
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>b[i];
	}
	
	for(long long ni=0;ni<n;ni++){
	
	
	for(long long i=ni;i<n;i++){
		a.push_back(b[i]);
		for(long long j=0;j<a.size()-1;j++){
			if(b[i]==a[j]){
				for(long long k=j;k<=a.size();k++){
					a.pop_back();
				}
			}
		}
	}
	for(long long k=0;k<a.size();k++){
		to[a[k]]++;
	}
	while(a.size()>0){
		a.pop_back();
	}
}
	
	for(long long i=1;i<=m;i++){
		cout<<to[i]<<" ";
	}
	return 0;
 } 
