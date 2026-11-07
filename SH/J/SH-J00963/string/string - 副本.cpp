#include<bits/stdc++.h>
#define N 200009
using namespace std;
long long n,p[N],l[N],x,ans;
char ch[N];
string S;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i]>>ch[i];
		l[i]=l[i-1]+p[i];
	}
	x=l[n]/2;
	for(int i=1;i<=n;i++){
		if(l[i]>=x) break;
		else{
			int j;
			for(j=n;j>=1;j--){
				if(l[n]-l[j]>=l[i]) break;
			}
			for(;j<=n;j++){
				if(ch[j]!=ch[i]) ans+=p[j];
			}
		}
		
		p[i]  p[n-i]-->ch==-->an+=p[n-i]
		p[i]-p[n-i]  p[n-1-i]
		
		
		
	}
	cout<<ans;
	
	return 0;
}
