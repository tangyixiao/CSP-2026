#include<bits/stdc++.h>
using namespace std;
struct node{
	int n;
	char c;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    long long cnt=0;
    int n,sum=0;char b;

    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i].n>>a[i].c;
    	b=b^a[i].c;
    	sum+=a[i].n;
	}
	if(n==2&&a[0].c!=a[1].c) {
		cout<<max(a[0].n,a[1].n);
		return 0;
	}
	
	int i=0,j=n-1;
	while(i<j){
		if (i==j) break;
		if(a[i].n!=a[j].n||a[i].c!=a[j].c) {
			cnt+=max(a[i].n,a[j].n);
			//cout<<max(a[i].n,a[j].n)<<endl;
			//cout<<i<<" "<<j<<" "<<a[i].n<<" "<<a[j].n<<"||"<<a[i].c<<" "<<a[j].c<<endl;
		}
		
		i++,j--; 
	}
	if (n==1&&a[0].n%2==0){cout<<1;return 0;}
	if(b==0&&sum%2==1) {cout<<0;return 0;}
	cout<<cnt;
	return 0;
}

