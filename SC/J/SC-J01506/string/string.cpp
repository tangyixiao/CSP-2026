#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	int len1,len2;
	int l=1,r=n;
	int y1=0,y2=0;
	while(l<r){
		a[l]-=y1;
		len1=a[l];
		a[r]-=y2;
		len2=a[r];
		//cout<<y2<<' ';
		if(c[l]!=c[r]){
			if(len1>len2){
			    ans+=len2;
			    r--;
			    y1=len2;
			    y2=0;
			}else if(len1<len2){
				//cout<<1;
				ans+=len1;
				l++;
				y2=len1;
			    y1=0;
			    //cout<<y2;
			}else{
				ans+=len1;
				l++,r--;
				y1=0,y2=0;
			}
		}else{
			//cout<<1;
			if(len1>len2){
			    r--;
			    y1=len2;
			    y2=0;
			}else if(len1<len2){
				l++;
				y2=len1;
			    y1=0;
			}else{;
				l++,r--;
				y1=0,y2=0;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
} 