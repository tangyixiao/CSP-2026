#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum=0,ans=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
		for(int j=0;j<a[i];j++){
			s+=b[i];
		} 
	}
	//bool flag=true;
	int l=0,r=sum-1;
	if(sum%2==1){
		while(l!=r){
			if(s[l]!=s[r]){
				ans++;	
			}
/*			else{
//				flag=false;
//				return 0;
			}
			*/
			l++;
			r--;
		}
		
	}
	if(sum%2==0){
		while(l<r){
			if(s[l]!=s[r]){
				ans++;
			}
			l++;
			r++;
		}
	}
/*	if(flag){
		cout<<0;
		return 0;
	}
	flag=false;
	int maxn=0;
	for(int i=0;i<26;i++){
		if(num[i]==maxn){
			flag=false;
		}
		else{
			if(num[i]>maxn){
				maxn=num[i];
				flag=true;
			}
		}
	}
	if(flag){
		
	}*/
	cout<<ans;
	return 0;
}
