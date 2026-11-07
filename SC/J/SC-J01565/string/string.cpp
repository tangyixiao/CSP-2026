#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N]={},n,cnt=0;
char c[N]={};
string sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long cntl=1,cntr=n,flag=0;
	while(1){
		if(cntl>=cntr){
			break;
		}
		if(a[cntl]<a[cntr]){
			if(c[cntl]==c[cntr]){
				a[cntr]=a[cntr]-a[cntl];
				cntl++;
			}else{
				a[cntr]=a[cntr]-a[cntl];
				cnt+=a[cntl];
				cntl++;
			}
		}else if(a[cntl]>a[cntr]){
			if(c[cntl]==c[cntr]){
				a[cntl]=a[cntl]-a[cntr];
				cntr--;
			}else{
				a[cntl]=a[cntl]-a[cntr];
				cnt+=a[cntr];
				cntr--;
			}
		}else if(a[cntl]==a[cntr]){
			if(c[cntl]==c[cntr]){
				cntl++;
				cntr--;
			}else{
				cnt+=a[cntr];
				cntr--;
				cntl++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
