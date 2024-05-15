#include <bits/stdc++.h>
using namespace std;
class bike
{
public:
    int bikeprice = 0;
    void set(int price)
    {
        bikeprice = price;
    }
    void display()
    {
        cout << bikeprice << endl;
    }
};

int main()
{
    bike sujuki;
    sujuki.set(770);
    sujuki.display();

    return 0;
}