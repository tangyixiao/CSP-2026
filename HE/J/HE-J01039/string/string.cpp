#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long nf[26]={0};
	int n,f=1;
	string sf;
	long long sum=0,num=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		long long a;
		string s1;
		cin>>a>>s1;
		if(i!=0&&s1!=sf){
			f=0;
		}
		sf=s1;
		sum+=a;
		for(int j=0;j<a;j++){
			s+=s1;
		}
	}
	if(f){
		cout<<0;
		return 0;
	}
	if(sum%2==0){
		int f=sum/2-1,f1=f+1;
		string sx,sy;
		for(int i=0;i<f;i++){
			if(s[i]!=s[sum-1-i]){
				num++;
			}
		}
		if(s[f]!=s[f1]){
			num++;
		}
	}
	else{
		int f=(sum-1)/2;
		string sx,sy;
		for(int i=0;i<f;i++){
			if(s[i]!=s[sum-1-i]){
				num++;
			}
		}
	}
	cout<<num;
	return 0;
}
