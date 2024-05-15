#include <bits/stdc++.h>
using namespace std;
class bike
{
private:
    int bikeprice = 0;

public:
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