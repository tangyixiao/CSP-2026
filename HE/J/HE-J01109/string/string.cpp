#include <iostream>
#include <string>
using namespace std;
int t;
long long ans=999999999;;
const int L=2*10e5+10;
long long a[L];
string s;
int cf(string fs){
	for(int i=1;i<s.size();i++){
		if(s[i-1]!=s[i]) return 0;
	}
	return 1;
}
long long armax(long long arge[]){
	long long maxx=0;
	for(int i=1;i<=t;i++){
		maxx=max(maxx,arge[i]);
	}
	return maxx;
}
long long armin(long long are[]){
	long long minn=10e9+100;
	for(int i=1;i<=t;i++){
		minn=min(minn,are[i]);
	}
	return minn;
}

int cnt(string q){
	int l=0,r=q.size()-1;
	int w=0;
	while(l<=r){
		if(s[l]!=s[r]) w++;
	}
	return w;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		char c;
		cin>>a[i]>>c;
		s+=c;
	}
	if(cf(s)){
		cout<<0;
		return 0;
	}
	if(s.size()==2){
		cout<<armin(a);
		return 0;
	}
	if(s.size()==3){
		cout<<armax(a);
		return 0;
	}
	
	long long sum=0;
	for(int i=1;i<=t;i++){
		int f=t-2+i-1;
	    if(f<=t){
	    	for(int j=i;j<=f;j++){
	    		sum+=a[j];
			}
		}
		ans=min(ans,sum);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
