#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	vector<char> c;
	vector<long long> a;
	long long lsum,rsum,l=0,r,n,cnt=0;
	cin>>n;
	r=n-1;
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		a.push_back(x);
		c.push_back(y);
	}
	lsum=a[l];rsum=a[r];
	while(l<r){
		if(c[l]==c[r]){
			if(lsum>rsum){
				r--;
				lsum-=rsum;
				rsum=a[r];
				
			}
			else if(lsum<rsum){
				l++;
				rsum-=lsum;
				lsum=a[l];
			}
			else{
				l++;
				r--;
				lsum=a[l];
				rsum=a[r];
			}
		}
		else{
			if(lsum>rsum){
				cnt+=rsum;
				r--;
				lsum-=rsum;
				rsum=a[r];
				
			}
			else if(lsum<rsum){
				cnt+=lsum;
				l++;
				rsum-=lsum;
				lsum=a[l];
			}
			else{
				cnt+=lsum;
				l++;
				r--;
				lsum=a[l];
				rsum=a[r];
			}
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
