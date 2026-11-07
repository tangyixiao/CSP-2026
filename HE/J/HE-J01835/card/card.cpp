#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+5;
	long long n,m,a[N],cnt[N],i_=1;
	string ju;
	//考试没找到问题 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	cin>>n>>m;
	bool chek[N];
	int maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=maxx){
			maxx=a[i];
		}
	}
	for(int i=0;i<=maxx;i++){
			chek[a[i]]=false;
	}
	int nn=n;
	while(n--){
		for(int i=i_;i<=nn;i++){
			if(chek[a[i]]==false){
				ju+=(a[i]+'0');
				chek[a[i]]=true;
			}
			else if(chek[a[i]]){
				int m=ju.find(a[i]);
				string s;	
				ju="";
				for(int j=0;j<=m;j++){
					s+=ju[j];
				}
				ju=s;
			}
		}
		int t=ju.size();
		for(int i=0;i<t;i++){
			cnt[ju[i]-'0']++;
		}
		for(int i=0;i<=maxx;i++){
			chek[a[i]]=false;
	}
				ju="";
				i_++;
	}
	for(int i=0;i<=maxx;i++){
		if(cnt[i]!=0){
			cout<<cnt[i]<<" ";
		}
	}
	return 0;
}
