#include <iostream>
#include <string>
using namespace std;
long long a[100000000];
char c[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	string s;
	long long num=0;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(long long i=0;i<n;i++){
		string w;
		for(int j=0;j<a[i];j++){
			w.push_back(c[i]);
		}
		s.append(w);
	}
		for(long long i=0;i<s.size()/2;i++){
			long long u;
			u=s.size()-i-1;
			if(s[i]!=s[u]){
				num++;
			}
		}
	cout<<num;
	return 0;
}
