#include<bits/stdc++.h>
using namespace std;
long long n,t[200005],num,t2,t3;
char t1[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	t2=n-1;
	t3=0;
	for(int i=0;i<n;i++){
		cin>>t[i]>>t1[i];
	}while(t2>t3){
		if(t1[t3]==t1[t2]){
			if(t[t3]>t[t2]){
				t[t3]-=t[t2];
				t2--;
			}else if(t[t3]==t[t2]){
				t3++;
				t2--;
			}else if(t[t3]<t[t2]){
				t[t2]-=t[t3];
				t3++;
			}
		}else{
			num+=min(t[t2],t[t3]);
			if(t[t3]>t[t2]){
				t[t3]-=t[t2];
				t2--;
			}else if(t[t3]==t[t2]){
				t3++;
				t2--;
			}else if(t[t3]<t[t2]){
				t[t2]-=t[t3];
				t3++;
			}
		}
	}
	cout<<num;
	return 0;
} 