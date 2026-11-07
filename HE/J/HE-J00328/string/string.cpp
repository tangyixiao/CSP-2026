#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,sum,a[N],mid,cnt;
long long i,j,now_ai,now_bi;
string s,b[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int k=1;k<=n;k++){
    	cin>>a[k]>>b[k];
    	sum+=a[k];
    	for(int g=1;g<=a[k];g++){
    		s+=b[k];
		}
	}
	i=0,j=s.length()-1;
	mid=(sum-1)/2;
	while(i<mid && j>mid){
		if(s[i]!=s[j]) cnt++;
		i++;
		j--;
	}
	cout<<cnt;
    return 0;
}
