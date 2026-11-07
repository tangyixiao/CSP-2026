#include<bits/stdc++.h>
using namespace std;
int n;
string b;
int qwe;
string a;
int cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> qwe>>a;
        for(int j=1;j<=qwe;j++)
        {
            b+=a;
        }
    }
    for(int i=0;i<b.length()/2;i++)
    {
        if(b[i]!=b[b.length()-1-i])
        {
            cnt++;
            //cout <<b[i];
            //cout << i<<" "<<b.length()-1-i<<endl;

        }
    }
    cout << cnt;
    //cout <<b.length();

}
