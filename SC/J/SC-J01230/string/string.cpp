#include<bits/stdc++.h>
using namespace std;
const long long N=2*1e5+5;
long long n,ans=0;
struct md{
	long long cd;
	char zf;
};
md cs[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>cs[i].cd>>cs[i].zf;
	}
	long long j=n;
	for(long long i=1;i<=n;i++){
		if(j<i){
			break;
		}
		while(1){
			if(cs[i].cd<cs[j].cd){
				if(cs[i].zf!=cs[j].zf){
					cs[j].cd-=cs[i].cd;
					ans+=cs[i].cd;
					break;
				}
				else{
					cs[j].cd-=cs[i].cd;
					break;
				}
			}
			else{
				if(cs[i].zf!=cs[j].zf){
					ans+=cs[j].cd;
					cs[i].cd-=cs[j].cd;
					j--;
				}
				else{
					cs[i].cd-=cs[j].cd;
					j--;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
