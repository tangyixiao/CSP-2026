#include<bits/stdc++.h>
using namespace std;
const int KS=2e5+10;
int a[KS];
bool use[KS];
string s[KS];
int n,m;
string insert(int x){
	string s;
	while(x>0){
		if(x%2==1){
			s+="1";
		}else {
			s+="0";
		}
		x/=2;
	}
	while(s.length()<=31){
		s+="0";
	}
	reverse(s.begin(),s.end());
	return s;
}
bool work(int w){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(use[i]){
			continue;
		}else{
			cnt+=(s[i][w]-'0');
		}
	}
	if(cnt>=m){
		for(int i=1;i<=n;i++){
			if((s[i][w]-'0')==0){
				use[i]=true;
			}
		}
		return true;
	}
	return false;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=insert(a[i]);
	}
	long long ans=0; 
	for(int i=0;i<=31;i++){
		if(work(i)==true){
			ans+=(1ll<<(31-i));
		}
	}
	cout<<ans<<"\n";
	return 0;
}
