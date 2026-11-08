#include <iostream>
using namespace std;
struct lp{
	long long nu;
	int c;
}gzw[205000];
int t;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>gzw[i].nu;
		char b;
		cin>>b;
		gzw[i].c=b-'0';
	}
	int l=1,r=t;
	while(l<=r){
		if(gzw[l].c!=gzw[r].c){
			if(gzw[l].nu>gzw[r].nu){
				gzw[l].nu-=gzw[r].nu;
				ans+=gzw[r].nu;
				r--;
			}else if(gzw[l].nu<gzw[r].nu){
				gzw[r].nu-=gzw[l].nu;
				ans+=gzw[l].nu;
				l++;
			}else{
				ans+=gzw[l].nu;
				l++;r--;
			}
		}
		if(gzw[l].c==gzw[r].c){
			if(gzw[l].nu>gzw[r].nu){
				gzw[l].nu-=gzw[r].nu;
				r--;
			}else if(gzw[l].nu<gzw[r].nu){
				gzw[r].nu-=gzw[l].nu;
				l++;
			}else{
				l++;r--;
			}
		}
	}
	cout<<ans;
	return 0; 
}
