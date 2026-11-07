#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+6;
int n;
long long a[1000000050],t,sum;
char c[N];
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i]>>c[i];
    	int j=0;
    	j=i;
    	while(a[j]!=0){
    		s[t]=c[i];
    		j--;
    		t++;
		}
	}
	if(t%2==0){
		for(int i=0;i<t;i++){
			if(s[i]!=s[t-i-1]) sum++;
		}
	}
	else if(t%2!=0){
		for(int i=0;i<t;i++){
			if(s[i]!=s[t-i-1]) sum++;
		}
	}
	cout<<sum;
	return 0;
}