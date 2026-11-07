#include<bits/stdc++.h>
using namespace std;
int n,cnt[25];
struct yc{
	int x;
	char c;
} a[200005];
inline void bl(int x){
	cnt[24]+=x%10;x/=10;
	cnt[23]+=x%10;x/=10;
	cnt[22]+=x%10;x/=10;
	cnt[21]+=x%10;x/=10;
	cnt[20]+=x%10;x/=10;
	cnt[19]+=x%10;x/=10;
	cnt[18]+=x%10;x/=10;
	cnt[17]+=x%10;x/=10;
	cnt[16]+=x%10;x/=10;
	cnt[15]+=x%10;x/=10;
	cnt[14]+=x%10;x/=10;
	cnt[13]+=x%10;x/=10;
	cnt[12]+=x%10;x/=10;
	cnt[11]+=x%10;x/=10;
	cnt[10]+=x%10;x/=10;
	cnt[9]+=x%10;x/=10;
	cnt[8]+=x%10;x/=10;
	cnt[7]+=x%10;x/=10;
	cnt[6]+=x%10;x/=10;
	cnt[5]+=x%10;x/=10;
	cnt[4]+=x%10;x/=10;
	cnt[3]+=x%10;x/=10;
	cnt[2]+=x%10;x/=10;
	cnt[1]+=x%10;x/=10;
	cnt[0]+=x%10;x/=10;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].x>a[r].x){
			if(a[l].c!=a[r].c){
				bl(a[r].x);
			}
			a[l].x-=a[r].x,r--;
		}
		else{
			if(a[l].c!=a[r].c){
				bl(a[l].x);
			}
			a[r].x-=a[l].x,l++;
		}
	}
	for(int i=24;i>=0;i--){
		cnt[i-1]+=cnt[i]/10;
		cnt[i]%=10;
	}
	bool iss=0;
	for(int i=0;i<=24;i++){
		if(iss==0 && cnt[i]==0);
		else{
			iss=1;
			cout<<cnt[i];
		} 
	}
}