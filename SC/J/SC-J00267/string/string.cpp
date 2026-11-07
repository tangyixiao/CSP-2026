#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],ans;
char c[N];
//char x[N],y[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0); 
	long long n,len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		for(int j=1;j<=a[i];j++)s+=c[i];
	}
	//cout<<s<<" s"<<endl; 
	int mid=len/2; 
	for(int i=1;i<=mid;i++){
		//x[i]=s[i-1];
		if(n%2==1){
			//y[i]=s[i-1+mid];
			if(s[i-1]!=s[i-1+mid])ans++;
		}
		else{
			if(s[i-1]!=s[i-1+mid+1])ans++;
		}
	}
	/*for(int i=1;i<=mid;i++){
		//cout<<x[i]<<' '<<y[i]<<endl;
		if(x[i]!=y[i])ans++;
	}*/
	cout<<ans;
	return 0;
}