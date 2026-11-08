#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;
	char y;
}f[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long le=0;
	for(int i=1;i<=n;i++){
		long long a;
		char b;
		cin>>a>>b;
		f[i].x=a;
		f[i].y=b;
		le+=a;
	}
	long long ans=0,l=0,r=0;
	for(int i=1,j=n;l<le/2;){
		long long k=min(le/2-l+1,f[i].x),k1=min(le/2-r+1,f[j].x);
		if(f[i].y==f[j].y){
			if(k1==k){
				l+=k;
				r+=k;
				i++,j--;
			}
			else if(k1<k){
				l+=k1;
				r+=k1;
				f[i].x-=k1;
				j--;
			}
			else{
				l+=k;
				r+=k;
				f[j].x-=k;
				i++;
			}
			continue;
		}	
		
		else{
			if(k1==k){
				l+=k;
				r+=k;
				ans+=k;
				i++,j--;
			}
			else{
				if(k1<k){
					l+=k1;
					r+=k1;
					f[i].x-=k1;
					ans+=k1;
					j--;
				}
				else{
					l+=k;
					r+=k;
					f[j].x-=k;
					ans+=k;
					i++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
