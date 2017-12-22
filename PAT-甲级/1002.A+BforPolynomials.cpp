#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-8;

double a[1005] = {0};
double b[1005] = {0};
double s[1005] = {0};

int main(void)
{

    int k, n;
    double an;
    scanf("%d", &k);
    while (k--)
    {
        scanf("%d%lf", &n, &an);
        a[n] = an;
    }
    scanf("%d", &k);
    while (k--)
    {
        scanf("%d%lf", &n, &an);
        b[n] = an;
    }
    int xs = 0;
    for (int i=0; i<1001; i++)
    {
        s[i] = a[i] + b[i];
        if (s[i] < -EPS || s[i] > EPS)
        {
            xs++;
        }
    }
    cout<<xs;
    for (int i=1001; i>=0; i--)
    {
        if (s[i] < -EPS || s[i] > EPS)
        {
            printf(" %d %.1lf", i, s[i]);
        }
    }

    return 0;
}