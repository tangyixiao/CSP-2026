#include<bits/stdc++.h>
using namespace std;
long long n;
long long arr[200006];
vector<char>a;
vector<char>b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    long long mmin=1000000005;
    for(long long i=0;i<n;i++){
    	cin>>arr[i];
    	char t;
    	cin>>t;
    	a.push_back(t);
    	mmin=min(mmin,arr[i]);
	}
	long long g=1;
	for(long long i=2;i<=sqrt(mmin);i++){
		while(true){
			bool chec=true;
			for(int j=0;j<n;j++){
				if(arr[j]%i!=0){
					chec=false;
					break;
				}
			}
			if(chec){
				for(long long j=1;j<=n;j++){
					arr[j]/=i;
				}
				g*=i;
			}
			else break;
		}
	}
	for(long long i=0;i<n;i++){
		char f=a[i];
		for(long long j=0;j<arr[i];j++){
			b.push_back(f);
		}
	}
//	for(int i=0;i<a.size();i++){
//		cout<<a[i];
//	}
//	cout<<endl;
//	for(int j=0;j<b.size();j++){
//		cout<<b[j];
//	}
//	cout<<endl;
	long long l=0,r=b.size()-1;
	long long aans=0;
	while(l<r){
		if(b[l]!=b[r])aans++;
		l++,r--;
	}
	cout<<aans*g;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
