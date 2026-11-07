#include<bits/stdc++.h>
using namespace std;
struct p{
	string y;
	long long x;
}a[201000];
int n;
string s;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].x>>a[i].y;
    	for(int j=1;j<=a[i].x;j++){
    		s+=a[i].y;
		}
	}
	if(s.size()%2==0){
		for(int l=s.size()/2-1,r=s.size()/2;l>=0,r<s.size();l--,r++){
			if(s[l]!=s[r]){
				sum++;
			}
		}
	}else{
		for(int l=s.size()/2-1,r=s.size()/2+1;l>=0,r<s.size();l--,r++){
			if(s[l]!=s[r]){
				sum++;
			}
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

