#include<bits/stdc++.h>
using namespace std;
string str1,str2;
int main()
{
	freopen("string.in","r",stdin); 
freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
    	long long  x;
    	char a;
    	cin >> x >> a;
    	while(x--){
    		str1+=a;
		}
	}
	int cnt=0;
for(int i=0;i<str1.size();i++){
	if(str1[i]!=str1[str1.size()-1-i])
	cnt++;
}
cout<<cnt/2;
	return 0;
 } 
