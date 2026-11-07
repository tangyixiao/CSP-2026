#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200009],bj[200009];
string ttt2(int n){
	string s="";
	while(n>0){
		s=to_string(n%2)+s;
		n/=2;
	}
	return s;
}
int ttt10(string s){
	reverse(s.begin(),s.end());
	int ans=0;
	for(int i=0;i<s.size();i++){
		ans+=(s[i]-'0')*pow(2.0,i);
	}
	return ans;
}
int ans=-200009;
int  and_(int x,int y){
	string sx=ttt2(x),sy=ttt2(y);
	reverse(sx.begin(),sx.end());
	reverse(sy.begin(),sy.end());
	string rnt="";
	for(int i=0;i<min(sx.size(),sy.size());i++){
		if(sx[i]==sy[i]&&sy[i]=='1'){
			rnt+="1";
		}
		else{
			rnt+="0";
		}
	}
	reverse(rnt.begin(),rnt.end());
	while(rnt[0]=='0')rnt.erase(0,1);
	return ttt10(rnt);
}
void go_and(int step,int cnt){
	if(step==m+1){
		ans=max(ans,cnt);
		return;
	}
	for(int i=1;i<=n;i++){
		if(bj[i]==0){
			bj[i]=1;
			go_and(step+1,and_(cnt,a[i]));
			bj[i]=0;
		}
	}
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	go_and(0,pow(2,30)-1);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}