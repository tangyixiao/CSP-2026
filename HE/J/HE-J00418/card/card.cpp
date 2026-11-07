#include <bits/stdc++.h>
using namespace std;
vector<long long> a;
vector<long long> b;
vector<long long> c;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	c.resize(m);
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		a.push_back(w);
	}

	for(int k=0;k<n;k++){
		b=a;
		for(int i=k;i<b.size();i++){
			int flag=0;
			for(int j=k;j<i;j++){
				if(flag==1){
					b[j]=-1;

				}
				if(b[j]==a[i]){
					flag=1;
					b[j]=-1;
				}
			}
		}
		for(int o=k;o<b.size();o++){
			for(int i=0;i<m;i++){
				if(b[o]==(i+1)){
					c[i]++;
				}
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
