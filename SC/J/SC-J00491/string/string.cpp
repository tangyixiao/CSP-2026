#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N=1e5+42;
int s[N],c[N];
int t,l;
int sum;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	while(t--){
		int x;
		char a;
		cin>>x>>a;
		l++;
		s[l]=x;
		c[l]=a-'a';
	}
	int p=1;
	for(int i=p;i<=l;i++){
		if(p>l)break;
		if(c[i]!=c[l+p-i]){
			if(s[i]<s[l+p-i]){
				sum+=s[i];
				c[i]=c[l+p-i];
				s[l+p-i]-=s[i];
				p++;
			}else{
				sum+=s[l+p-i];
				c[l+p-i]=c[i];
				s[i]-=s[l+p-i];
				l--;
				if(s[i]==0){
                    p++;
                }
			}
		}
	}
	cout<<sum;
	return 0;
}