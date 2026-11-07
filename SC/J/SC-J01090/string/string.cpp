#include<bits/stdc++.h>
using namespace std;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		for(int j=0;j<a[i];j++){
			s+=c;
		}
	}
	if(n%2==1){
		for(int i=0;i<n/2+1;i++){
			if(s[i]!=s[s.size()-1-i]){
				sum++;
			}
		}
	}
	else{
		for(int i=0;i<n/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				sum++;
			}
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}