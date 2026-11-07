#include <bits/stdc++.h>
using namespace std;

long long a[100005],cnt,num=0;
int b;
char c[100005];

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout); 
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    	cin >> a[i] >> c[i];
    	cnt += a[i];
	}
	if(cnt%2==1){
		b=1;
	}
	cnt = cnt/2;
	
	string s;
	char s1[10000],s2[10000];

	for(int i=0;i<n;i++){
    	for(int j=0;i<a[i];i++){
    		s+=c[i];
		}
	}
	for(int i=0;i<cnt;i++){
		s1[i] = s[i];
		s2[i] = s[s.size()-i];
	}

    for(int i=0;i < n/2;i++){
    	if(s1[i] != s2[i]){
    		num++;
		}
	}
	
	cout << num;
    
    return 0;
}
