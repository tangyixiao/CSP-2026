#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	long long n,sum=0;
	cin>>n;
	vector<long long> v(n);
	vector<char> s(n);
	for(int i=0;i<n;i++){
		cin>>v[i]>>s[i];
	}
	int i=0,j=v.size()-1;
	while(i<=j){
		bool ok=true;
		if(v[i]>v[j]){
			ok=false;
		}
		if(s[i]!=s[j]){
			if(ok){
				sum+=v[i];
			}else{
				sum+=v[j];
			}
		}
		if(v[i]==v[j]){
			i++;
			j--;
		}else if(ok){
			v[j]-=v[i];
			i++;
		}else{
			v[i]-=v[j];
			j--;
		}
	}
	cout<<sum;
	return 0;
}
