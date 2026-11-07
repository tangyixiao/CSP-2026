#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,l=1,r;
long long cnt=0;
struct qq{
	long long sum;
	char zimu;
};
qq a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sum >>a[i].zimu ;
	}
	r=n;
	while(l<r){
		if(a[l].zimu !=a[r].zimu ){
			if(a[l].sum >a[r].sum ){
				cnt+=a[r].sum;
				a[l].sum -=a[r].sum ;
				r--;
			}
			else if(a[l].sum <a[r].sum ){
				cnt+=a[l].sum ;
				a[r].sum -=a[l].sum ;
				l++;
			}
			else if(a[l].sum == a[r].sum ){
				cnt+=a[l].sum;
				l++;r--;
			}
		}
		else{
			if(a[l].sum >a[r].sum ){
				a[l].sum -=a[r].sum ;
				r--;
			}
			else if(a[l].sum <a[r].sum ){
				a[r].sum -=a[l].sum ;
				l++;
			}
			else if(a[l].sum == a[r].sum ){
				l++;r--;
			}
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}