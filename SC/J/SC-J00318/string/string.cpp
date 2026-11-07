#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	char s1[n];
	char s2[n]; 
	long long int a[n];
	char c[n];
	long long sum=0;
	long long cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s1[j]=c[i];
		}
		for(int z=a[i];z>0;z--){
			s2[z]=c[i];
		} 
	}
	if(cnt%2==0){
		for(int i=cnt/2;i<cnt;i++){
			if(s2[i]!=s1[i]){
				sum++;
			}
		}
	}
	if(cnt%2!=0){
		int ji=(cnt+1)/2;
		for(int i=ji;i<cnt;i++){
			if(s2[i]!=s1[i]){
				sum++;
			}	
		}
	}

	cout<<sum;
	return 0;	
} 	