#include<bits/stdc++.h>
//Trick||Treat!
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	char c;
	int n, end;
	long long cnt = 0, a[200005];
	cin>>n;
	for(int i = 1; i <= n;++i){
		cin>>a[i]>>c;
		s += c;
	}
	end = n;
	for(int i = 1; i <= end; ++i){
		while(a[i]>0){
			if(end < i)
				break;
			int x = min(a[i],a[end]);
		//	cout<<i-1<<" "<<end-1<<endl;
			if(s[i-1] != s[end-1]){
				cnt+=x;
				//cout<<i<<" "<<end<<" "<<endl;
			}
			a[i]-=x;
			a[end]-=x;
			if(a[end] <= 0){
				end--;
			//	cout<<end<<endl;
			}
		}
	}
	cout<<cnt;
	return 0;
}
