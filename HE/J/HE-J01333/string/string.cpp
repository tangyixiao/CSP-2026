#include<bits/stdc++.h>
using namespace std;
const int maxn=1E9+5;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,cnt=0,sum=0;
    cin>>n;
    int a[n+5];
    vector<char>st(maxn,0);
    char c;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cin>>c;
        for(int j=1;j<=a[i];j++){
            st[j]=c;
            sum++;
        }
    }
   	int l=1;
   	int r=sum;
   	while(l<r){
   		if(st[r]!=st[l]){
   			cnt++;
		}
		l++;r--;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
