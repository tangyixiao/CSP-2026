#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	int n,ni;
	char nii;
	long long num=0,l;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ni;
		cin>>nii;
		for(int j=0;j<ni;j++){
			s[num]=nii;
			num++;
		}
	}
	l=s.size();
	long long sum=0;
	for(long long i=0;i<l/2;i++){
		if(s[i]==s[l-i-1]){
			sum++;
		}
	}cout<<sum;
	freopen("string.out","w",stdout);
	return 0;
}
