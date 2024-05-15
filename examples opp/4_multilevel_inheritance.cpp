#include <bits/stdc++.h>
using namespace std;
class grandfather
{
public:
    void who()
    {
        cout << "i am your Grandfather" << endl;
    }
};
class dad : public grandfather
{
public:
    void name()
    {
        cout << "i am your dad" << endl;
    }
};
class child : public dad
{
public:
    string myname = "son";
};
int main()
{
    child khoka;
    khoka.who();
    khoka.name();

    return 0;
}