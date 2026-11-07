#include<bits/stdc++.h>
using namespace std;
int n,a[1000000];
char c[1000000];
long long mid,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		mid+=a[i];
	}
	mid/=2;
	int l=1,r=n;
	long long le=a[1],lee=a[n];
	while(mid>0)
	{
		if(l==r)break;
		if(c[l]==c[r]){
			if(le>lee){
				while(le>lee)
				{
					if(c[l]==c[r]){
						le-=lee;
				        r--;
				        lee=a[r];
					}
					else{
						ans+=lee;
						le-=lee;
				        r--;
				        lee=a[r];
					}
				}
			}
			else if(le==lee){
				mid-=a[l];
				l++;
				r--;
				le=a[l];
				lee=a[r];
			}
			else{
				mid-=a[l];
				lee-=le;
				l++;
				le=a[l];
			}
		}
		else{
			if(le>lee){
				while(le>lee)
				{
					if(c[l]==c[r]){
						le-=lee;
				        r--;
				        lee=a[r];
					}
					else{
						ans+=lee;
						le-=lee;
				        r--;
				        lee=a[r];
					}
				}
			}
			else if(le==lee){
				ans+=lee;
				mid-=a[l];
				l++;
				r--;
				le=a[l];
				lee=a[r];
			}
			else{
				ans+=le;
				mid-=a[l];
				lee-=le;
				l++;
				le=a[l];
			}
		}
	}
	cout<<ans;
	return 0;
}
