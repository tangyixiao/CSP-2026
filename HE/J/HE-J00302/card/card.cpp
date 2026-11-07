#include<bits/stdc++.h>
using namespace std;
vector <long long>v;
long long a,n,m;
long long q,b[5000010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(v[i]==v[j]){
				q=j+1;
			}
		}
		for(int s=1;s<=n;s++){
			for(int e=q;e<v.size();e++){
				if(v[e]==s){
					b[s]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=0){
			cout<<b[i]<<' ';
		}
	}
	return 0;
}
