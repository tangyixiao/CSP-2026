#include<bits/stdc++.h>
using namespace std;

struct zone{
	long long st;
	long long ed;
	long long size;
	char ch;
}z[200009];

long long n;
long long a[200009];
long long curnum=1;
char temp;
long long ans=0;
zone llft,rlft;

int main ()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	for (long long i=1; i<=n; i++) {
		cin>>a[i]>>temp;
		z[i].st=curnum;
		z[i].ed=curnum+a[i]-1;
		z[i].size=z[i].ed-z[i].st+1;
		z[i].ch=temp;
		
		curnum+=a[i];
	}
	
	long long tot=curnum-1;
	long long l=1,r=n;
	
	while (l<r) {
		if (llft.size!=0) {
			if (llft.size<z[r].size) {
				if (llft.ch!=z[r].ch) {
					ans+=llft.size;
				}
				rlft.size=z[r].size-llft.size;			
				rlft.ch=z[r].ch;	
				llft.size=0;
				llft.ch=z[l+1].ch;
				l++;
			}
			else if (llft.size>z[r].size) {
				if (llft.ch!=z[r].ch) {
					ans+=z[r].size;
				}
				llft.size=llft.size-z[r].size;	
				llft.ch=z[l].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				r--;
			}
			else if (llft.size==z[r].size) {
				if (llft.ch!=z[r].ch) {
					ans+=z[r].size;
				}
				llft.size=0;
				llft.ch=z[l+1].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				l++;
				r--;
			}
		}
		
		else if (rlft.size!=0) {
			if (rlft.size<z[l].size) {
				if (rlft.ch!=z[l].ch) {
					ans+=rlft.size;
				}
				llft.size=z[l].size-rlft.size;			
				llft.ch=z[l].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				r--;
			}
			else if (rlft.size>z[l].size) {
				if (rlft.ch!=z[l].ch) {
					ans+=z[l].size;
				}
				rlft.size=rlft.size-z[l].size;	
				rlft.ch=z[r].ch;
				llft.size=0;
				llft.ch=z[l+1].ch;
				l++;
			}
			else if (rlft.size==z[l].size) {
				if (rlft.ch!=z[l].ch) {
					ans+=z[l].size;
				}
				llft.size=0;
				llft.ch=z[l+1].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				l++;
				r--;
			}
		}
		
		else if (llft.size==0&&rlft.size==0) {
			if (z[l].size>z[r].size) {
				if (z[l].ch!=z[r].ch) {
					ans+=z[r].size;
				}
				llft.size=z[l].size-z[r].size;
				llft.ch=z[l].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				r--;
			}
			
			else if (z[l].size<z[r].size) {
				if (z[l].ch!=z[r].ch) {
					ans+=z[l].size;
				}
				rlft.size=z[r].size-z[l].size;
				rlft.ch=z[r].ch;
				llft.size=0;
				llft.ch=z[l+1].ch;
				l++;
			}
			
			else if (z[l].size==z[r].size) {
				if (z[l].ch!=z[r].ch) {
					ans+=z[r].size;
				}
				llft.size=0;
				llft.ch=z[l+1].ch;
				rlft.size=0;
				rlft.ch=z[r-1].ch;
				l++;
				r--;
			}
		}
	}

	cout<<ans;
	
	return 0;
}
