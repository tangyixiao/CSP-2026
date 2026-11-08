#include<bits/stdc++.h>
using namespace std;
struct qu{
	long long si,ei;
	char ch;
};qu s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,k=0,ans=0,l=0;
	char c;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>c;
		l+=a;
		s[i].si=k;
		k+=a;
		s[i].ei=k-1;
		s[i].ch=c;
	}
	long long i=0,j=n-1,x=0,y=l-1,b;
	while(x<y){
		y=l-1-x;
		b=min(s[i].ei-x,y-s[j].si)+1;
		if(y<s[j].si){
			j--;
		}
		if(s[i].ch!=s[j].ch)ans+=b;
		x+=b;
		if(x>s[i].ei)i++;
	}
	cout<<ans;
	return 0;
}
