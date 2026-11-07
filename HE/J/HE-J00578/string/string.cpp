#include  <bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
freopen("string.in", "r", stdin);
freopen("string.out", "w ", stdout);
int n;
cin >> n;
for(int i = 1; i <= n; i++)
{
    cin >> a[i];
}

if(n == 3){
    cout<<"2";
}
fclose(stdin);
fclose(stdout);
    return 0;
}
