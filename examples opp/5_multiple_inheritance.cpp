#include <bits/stdc++.h>
using namespace std;
class info1
{
public:
    void name()
    {
        cout << "my name is shifat" << endl;
    }
};
class info2
{
public:
    void age()
    {
        cout << "my age is 21" << endl;
    }
};
class person : public info1, public info2
{
};
int main()
{
    person shifat;
    shifat.name();
    shifat.age();

    return 0;
}