#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200002];
struct o{
	long long zhi,ne;
}b[200002];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		b[i].ne=i+1;
	}
	b[0].ne=1;
	b[n].ne=999999;
	for(int i=1;i<=n;i++){
		b[i].zhi=a[i];
		for(int j=1;j<i;j++){
			if(b[j].zhi==b[i].zhi){
				b[j-1].ne=i;
			}
		}
	}
	for(long long i=b[0].ne;b[i].ne==999999;i=b[i].ne){
		cout<<b[i].zhi<<" ";
	}
	return 0;
}
