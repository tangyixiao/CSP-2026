#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<int> v;
	string s="";
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
		cin>>s;
	}
    long long sum=0;
    for(int i=0;i<v.size();i++){
    	sum+=v[i];
	}
	sum/=2;
	long long ans=sum;
	long long len=s.size();
	for(int i=0;i<v.size();i++){
		if(s[i]==s[len+1-i]&&v[i]==v[len+1-i]){
			continue;
		} 
		if(sum<v[i]){
			ans-=sum;
			cout<<ans;
			break;
		}else{
			sum-=v[i];
		}
	}
	return 0;
}
