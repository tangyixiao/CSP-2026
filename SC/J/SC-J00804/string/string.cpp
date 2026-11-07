#include<bits/stdc++.h>
using namespace std;
long long n,num[300005];
char a[300005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie();
	cin>>n;
	long long sum=0;
	for(long long i=1;i<=n;i++){
		cin>>num[i]>>a[i];
		sum+=num[i];
	}
	long long color=1,color2=1,ans=0;
	for(long long i=1,pos=0,pos2=n+1;pos2>pos;i++){
		if(color==i){
			pos++;
			color=i+num[pos];
			//cout<<"color:"<<color<<endl;
			//cout<<"pos:"<<pos<<endl;
		}
		if(color2==i){
			pos2--;
			color2=i+num[pos2];
			//cout<<"color2:"<<color2<<endl;
			//cout<<"pos2:"<<pos2<<endl;
		}
		//cout<<pos<<' '<<pos2<<endl;
		if(pos2<=pos) break;
		if(a[pos]!=a[pos2]) ans++;
	}
	cout<<ans;
	return 0;
}