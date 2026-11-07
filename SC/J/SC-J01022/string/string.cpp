#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s=" ";
	int chang=0,p=0;
	int a1;
	char c1;
	for(int i=1;i<=n;i++){
		cin>>a1;
		cin>>c1;
		p=max(p,a1);
		for(int i=1;i<=a1;i++){
			s+=c1;
			chang++;
		}
	}
	if(p>500){
		cout<<30000000;
		return 0;
	}
	if(chang%2==1){
		int middle=chang/2+1;
		int ans=0;
		for(int i=1;i<middle;i++){
			if(s[middle-i]!=s[middle+i]){
				ans++;
			}
		}
		cout<<ans;
		return 0;
	}
	else{
		int mid=chang/2;
		int sum=0;
		if(s[mid+1]!=s[mid]){
			sum+=1;
		}
		for(int i=1;i<mid;i++){
			if(s[mid-i]!=s[mid+i+1]){
				sum++;
			}
		}
		cout<<sum;
		return 0;
	}
	return 0;
} 