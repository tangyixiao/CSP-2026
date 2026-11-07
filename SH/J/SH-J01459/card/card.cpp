#include<bits/stdc++.h>
using namespace std;
struct st{
	bool ap;
	long long pos;
};
long long a[500010];
st b[500010];
vector <long long> d;
long long cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		d.clear();
		for(long long j=i;j<=n;j++){
			if(b[a[j]].ap==0){
				long long aa=a[j];
				d.push_back(aa);
				b[a[j]].ap=1;
				b[a[j]].pos=d.size()-1;
			}else{
				for(long long k=b[a[j]].pos;k<=d.size()-1;k++){
					d.pop_back();
					long long aa=a[j];
					d.push_back(aa);
				}
			}
		}
		if(d[d.size()-1]==i)
			cnt++;
	}
	cout<<cnt;
	return 0;
}
