#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;long long s_size=0,ans=0,add=1e9+7;
	vector<long long> A(n);
	vector<char> C(n);
	for(int i=0;i<n;i++){
		cin>>A[i]>>C[i];
		s_size+=A[i];
		add=min(A[i],add);
	}
	//cout<<add<<"\n";
	for(long long i=1,j=s_size,s_i=0;i<j;s_i++){
		char c1,c2;
		int k1,k2;
		for(int k=0,cnt=1;k<n;k++){
			if(cnt+A[k]-1>=i&&cnt<=i){
				c1=C[k];
				k1=k;
			}
			if(cnt+A[k]-1>=j&&cnt<=j){
				c2=C[k];
				k2=k;
				break;
			}
			cnt+=A[k];
		}
		//cout<<s_i<<' '<<k1<<' '<<k2<<' '<<i<<' '<<j<<'\n';
		i+=add;
		j-=add;
		if(c1!=c2) ans+=add;
	}
	cout<<ans;
	return 0;
}
//以 WHH 之力击碎雷霆