#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
struct Huiwen{
	int num;
	char c;
}h[20005]; 
int ngl[27],nrt[27];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
		int num;
		char c;
		cin>>num>>c;
		h[i].num=num;
		h[i].c=c;
		a+=num;
	}int mid=a/2;
	int an,cnt=n/2;
	for(int i=1;i<=n;i++){
		an+=h[i].num;
		if(an>=mid){
			cnt=i;
			break;
		}
	}//cout<<cnt;
	for(int i=0;i<((a%2==0)?cnt+1:cnt);i++){
		ngl[h[i].c-'a'+1]+=h[i].num;
		//cout<<h[i].num<<endl;
	}
	for(int i=((a%2==0)?cnt+1:cnt);i<n;i++){
		nrt[h[i].c-'a'+1]+=h[i].num;
	}int ans=0;
	for(int i=1;i<=26;i++){
		ans+=abs(ngl[i]-nrt[i]);
		//cout<<ans<<" "<<ngl[i]<<" "<<nrt[i]<<endl;
	}ans/=2;
	cout<<ans-2+(ans%2);
} 
