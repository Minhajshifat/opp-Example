#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    void sound()
    {
        cout << "sound nai" << endl;
    }
};
class cat : public animal
{
public:
    void sound()
    {
        cout << "mew mew" << endl;
    }
};
class dog : public animal
{
public:
    void sound()
    {
        cout << "gau gau" << endl;
    }
};

int main()
{
    dog german;
    german.sound();
    cat ikri;
    ikri.sound();
    return 0;
}