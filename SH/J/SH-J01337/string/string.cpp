#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
int a[N];
char c[N]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
	}
	int p1=1,p2=n;
	long long cnt=0;
	while(p1<=p2){
		if(a[p1]>a[p2]){
			if(c[p1]!=c[p2]){
				cnt+=a[p2];
			}
			a[p1]-=a[p2];
			p2--;
		}
		else{
			if(c[p1]!=c[p2]){
				cnt+=a[p1];
			}
			a[p2]-=a[p1];
			p1++;
		}
		if(a[p1]==0) p1++;
		if(a[p2]==0) p2--;
	}
	cout<<cnt<<endl;
	return 0;
}

