#include <bits/stdc++.h>
using namespace std;
class brand
{
public:
    void brandname()
    {
        cout << "apple" << endl;
    }
};
class mobile : public brand
{
public:
    string model = "xs max";
};

int main()
{
    mobile phone;
    phone.brandname();

    return 0;
}