#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a;
char c;
string s;
ll cnt;
ll sum,mid;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		sum+=a;
		while(a--) s+=c;
	}
	if(sum%2==0){
		string t=s.substr(0,sum/2);
		string tt=s.substr(sum/2,sum/2);
		s=t+" "+tt;
	}
	mid=sum/2;
	string t1=s.substr(0,mid);
	string t2=s.substr(mid+1,mid);
	for(int i=0;i<t1.size();i++){
		if(t1[i]!=t2[t2.size()-i-1]) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
} 
