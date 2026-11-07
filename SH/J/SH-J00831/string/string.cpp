#include<bits/stdc++.h>
using namespace std;
const int N=200009;
long long cnt=0,ans=0;
int s[N],n;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		int a1=c[l];
		int a2=c[r];
		if(a1!=a2){
			if(s[l]>s[r]){
				s[l]-=s[r];
				cnt+=s[r];
				r--;
			}
			else if(s[l]<s[r]){
				s[r]-=s[l];
				cnt+=s[l];
				l++;
			}
			else
			{
				cnt+=s[l];
				l++;
				r--;
			}
		}
		else
		{
			if(s[l]>s[r]){
				s[l]-=s[r];
				r--;
			}
			else if(s[l]<s[r]){
				s[r]-=s[l];
				l++;
			}
			else
			{
				l++;
				r--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
