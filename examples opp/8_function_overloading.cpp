#include <bits/stdc++.h>
using namespace std;
class adder
{
public:
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    int add(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    adder x;
    int result = x.add(3, 4, 2);

    cout << result << endl;
    result = x.add(2, 3);
    cout << result << endl;

    return 0;
}