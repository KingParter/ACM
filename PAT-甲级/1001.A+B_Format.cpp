#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char s[20];
    int a, b, sum, zjs = 0, js = 0;
    bool fs = false;
    cin>>a>>b;
    sum = a + b;
    if (sum < 0)
    {
        fs =true;
        sum = abs(sum);
    }
    while (sum/10)
    {
        s[zjs++] = '0'+sum%10;
        sum /= 10;
        js++;
        if (js == 3)
        {
            js = 0;
            s[zjs++] = ',';
        }
    }
    s[zjs] = '0'+sum;
    if (fs)
    {
        zjs++;
        s[zjs] = '-';
    }
    for (int i=zjs; i>=0; i--)
    {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
