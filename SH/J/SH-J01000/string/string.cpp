#include<bits/stdc++.h>
using namespace std;
int n;
long long size,cnt;
struct dl{
	long long start;
	char z;
	long long end;
};
dl a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	a[1].start=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		long long cd;
		char x;
		cin>>cd>>x;
		size+=cd;
		a[i].end=a[i].start+cd-1;
		a[i+1].start=a[i].end+1;
		a[i].z=x;
	}
	int c=1,b=n;
	while (true){
		dl nc=a[c];
		dl nb=a[b];
		long long ncc=nc.end-nc.start+1;
		long long nbc=nb.end-nb.start+1;
		if (c>=b) break;
		if (ncc>nbc){
			if (nc.z!=nb.z){
				cnt+=ncc-nbc;
			}
			b--;
			a[c].start+=nbc;
		}
		else if (ncc<nbc){
			if (nc.z!=nb.z){
				cnt+=nbc-ncc;
			}
			c++;
			a[b].end-=ncc;
		}
		else{
			if (nc.z!=nb.z){
				cnt+=ncc;
			}
			c++;
			b--;
		}
		
	}
	cout<<cnt;
	return 0;
}
