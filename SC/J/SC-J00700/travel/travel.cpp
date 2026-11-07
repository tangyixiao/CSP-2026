#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int n1,n2,n3,n4;
    string c1;
    string s1;
    string c2;
    string s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2)
    {
        n1 = 1;
    }
    else
    {
        n1 = 0;
    }
    if ((c1[1] == c2[1])&&(c1[0] == c2[0]))
    {
        n2 = 1;
    }
    else
    {
        n2 = 0;
    }
    if (s1 == "01F" && s2 == "01D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "01D" && s2 == "01F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "01F" && s2 == "01D")
    {
        n3 = 1;
        n4 = 1;
    }

    else if (s1 == "02F" && s2 == "02D")
    {
        n3 = 1;
        n4 = 1;
    }

    else if (s1 == "02D" && s2 == "02F")
    {
        n3 = 1;
        n4 = 1;
    }

    else if (s1 == "03F" && s2 == "03D")
    {
        n3 = 1;
        n4 = 1;
    }

    else if (s1 == "03D" && s2 == "03F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "04F" && s2 == "04D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "04D" && s2 == "04D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "05F" && s2 == "05D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "05D" && s2 == "05F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "06F" && s2 == "06D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "06D" && s2 == "06F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "07F" && s2 == "07D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "07D" && s2 == "07F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "08F" && s2 == "08D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "08D" && s2 == "08F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "09F" && s2 == "09D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "09D" && s2 == "09F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "10F" && s2 == "10D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "10D" && s2 == "10F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "11F" && s2 == "11D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "11D" && s2 == "11F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "12F" && s2 == "12D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "12D" && s2 == "12F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "13F" && s2 == "13D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "13D" && s2 == "13F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "14F" && s2 == "14D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "14D" && s2 == "14F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "15F" && s2 == "15D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "15D" && s2 == "15F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "16F" && s2 == "16D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "16D" && s2 == "16F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "17F" && s2 == "17D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "17D" && s2 == "17F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "18F" && s2 == "18D")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "18D" && s2 == "18F")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "01A" && s2 == "01B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "01B" && s2 == "01A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "02A" && s2 == "02B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "02B" && s2 == "02A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "03A" && s2 == "03B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "03B" && s2 == "03A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "04A" && s2 == "04B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "04B" && s2 == "04A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "05A" && s2 == "05B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "05B" && s2 == "05A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "06A" && s2 == "06B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "06B" && s2 == "06A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "07A" && s2 == "07B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "07B" && s2 == "07A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "08A" && s2 == "08B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "08B" && s2 == "08A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "09A" && s2 == "09B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "09B" && s2 == "09A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "10A" && s2 == "10B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "10B" && s2 == "10A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "11A" && s2 == "11B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "11B" && s2 == "11A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "12A" && s2 == "12B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "12B" && s2 == "12A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "13A" && s2 == "13B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "13B" && s2 == "13A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "14A" && s2 == "14B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "14B" && s2 == "14A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "15A" && s2 == "15B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "15B" && s2 == "15A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "16A" && s2 == "16B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "16B" && s2 == "16A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "17A" && s2 == "17B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "17B" && s2 == "17A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "18A" && s2 == "18B")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "18B" && s2 == "18A")
    {
        n3 = 1;
        n4 = 1;
    }
    else if (s1 == "01A" && s2 == "01C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "01C" && s2 == "01A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "01A" && s2 == "01C")
    {
        n3 = 1;
        n4 = 0;
    }

    else if (s1 == "02C" && s2 == "02A")
    {
        n3 = 1;
        n4 = 0;
    }

    else if (s1 == "02A" && s2 == "02C")
    {
        n3 = 1;
        n4 = 0;
    }

    else if (s1 == "03C" && s2 == "03A")
    {
        n3 = 1;
        n4 = 0;
    }

    else if (s1 == "03A" && s2 == "03C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "04C" && s2 == "04A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "04A" && s2 == "04C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "05C" && s2 == "05A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "05A" && s2 == "05C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "06C" && s2 == "06A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "06A" && s2 == "06C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "07C" && s2 == "07A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "07A" && s2 == "07C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "08C" && s2 == "08A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "08A" && s2 == "08C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "09C" && s2 == "09A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "09A"&& s2 == "09C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "10C" && s2 == "10A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "10A" && s2 == "10C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "11C" && s2 == "11A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "11A" && s2 == "11C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "12C" && s2 == "12A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "12A" && s2 == "12C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "13C" && s2 == "13A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "13A" && s2 == "13C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "14C" && s2 == "14A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "14A" && s2 == "14C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "15C" && s2 == "15A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "15A" && s2 == "15C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "16C" && s2 == "16A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "16A" && s2 == "16C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "17C" && s2 == "17A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "17A" && s2 == "17C")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "18C" && s2 == "18A")
    {
        n3 = 1;
        n4 = 0;
    }
    else if (s1 == "18A" && s2 == "18C")
    {
        n3 = 1;
        n4 = 0;
    }
    else
    {
        n3 = 0;
        n4 = 0;
    }
    cout << n1 << n2 << n3 << n4;
    return 0;
}
