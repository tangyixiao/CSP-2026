#include<bits/stdc++.h>
#define int long long 
using namespace std;
string s;

void work(){
	long a; char c;
	cin>>a>>c;
	for(int i=1;i<=a;i++){
		s+=c;
	}
}

void hw(string s1){
	long long cnt=0;
	for(long long i=0,j=s1.size()-1;i<s1.size()/2,j>=s1.size()/2;i++,j--){
		if(s1[i]==s1[j]){
			cnt=1;
		}
		else{
			cnt=0;break;
		}
	}
	if(cnt==1){
		cout<<"0";
		return ;
	}
	long long sum=0;
	if(cnt==0){
		for(long long i=0,j=s1.size()-1;i<s1.size()/2,j>=s1.size()/2;i++,j--){
				if(s1[i]!=s1[j]){
					sum++;
				}
			}
	}
	cout<<sum;
}



signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		work();
	}
	hw(s);
	return 0;
}
