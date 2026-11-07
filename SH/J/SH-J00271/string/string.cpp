#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for (int i=1;i<=n;i++){
		int num;
		char c;
		cin>>num>>c;
		for (int j=1;j<=num;j++){
			s+=c;
		}
	}
//	cout<<s<<endl;
	long long mid=s.size()/2;
	long long len=s.size();
	long long amid=mid;
	if (len%2!=0){
		mid++;
		amid++;
	}
	if (len%2==0){
		amid=mid+1;
	}
	long long sum1=0;
	for (int i=0;i<mid;i++){
		if (s[i]!=s[len-1-i]){
			sum1++;
		}
	}
	long long sum2=0;
	for (int i=s.size()-1;i>=amid-1;i--){
		if (s[i]!=s[len-1-i]){
			sum2++;
		}
	}
	cout<<min(sum1,sum2);
	return 0;
}//aabbc
