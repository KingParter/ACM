/********************************************************
2017.09.08京东校招C/C++编程题-疯狂的序列
By:CUITWhy 作者原创，转载请注明出处！ 
提交结果：AC 
题目描述（数据范围为long long）：
 有一序列为1,2,2,3,3,3,4,4,4,4,5,5,5,5,5...
输入：一个正整数n
输出：序列中第n个数的值
输入样例：12
输出样例：5
解题思路：
打表发现规律
i n
1 1
2 3
3 6
4 10
5 15
6 21
7 28
8 36
i*(i+1) = 2*n
进一步发现
tmp = sqrt(2*n)的值有两种结果，
一是其值即为所求值，直接输出即可 
二是其值比所求值小1，加1输出即可
怎样判断呢？
如果tmp*(tmp+1) < n,其值就比所求值小1，
否则其值即为所求值。 
********************************************************/
#include <iostream> 
#include <cmath>

using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    long long tmp = sqrt(2 * n);
    if ( (tmp * (tmp + 1) / 2) < n )
    {
        cout << tmp + 1 << endl;
    }
    else
    {
        cout << tmp << endl;
    }
}
