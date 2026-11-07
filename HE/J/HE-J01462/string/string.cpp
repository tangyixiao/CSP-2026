#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
string s;
//struct hh{
//	int shuliang;
//	char zifu;
//};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    vector<char> a(n);
    for(int i=0;i<n;i++){
    	int t;
    	cin>>t>>a[i];
    	for(int j=0;j<t;j++){
    		s+=a[i];
		}
	}
	long long r=s.size()-1;
	for(int l=0;l<=r;l++){
		if(a[l]!=a[r]) cnt++;
		r--;
	}
	cout<<cnt; 
//    int r=n;
//    for(int l=0;l<=r;l++){
//    	m=a[l].shuliang;
//    	k=a[r].shuliang;
//    	if(a[l].zifu==a[r].zifu){
//    		if(m>k){
//    			o=m-k;
//    			r--;
//			}else{
//				o=k-m;
//				l++;
//				if
//			}
//		}
//	}
	return 0;
}
