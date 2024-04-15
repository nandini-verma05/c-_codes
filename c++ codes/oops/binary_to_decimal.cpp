
#include <iostream>
#include <string>
using namespace std;
class conversion
{
public:
    int bin = 0;
    int dec = 0, i = 0, rem=0;
    void get(void);
    void con(void);
};
void conversion::get()
{
    cout << "entre the binary number" << endl;
    cin >> bin;
    int temp = bin;
    while (temp != 0)
    {
        rem = temp % 10;
        if (rem != 0 && rem != 1)
        {
            cout << "it is not a binnary number";
            exit(0);
        }
        temp /= 10;
    }
}
void conversion::con()
{
    
    int dec = 0, i = 1, rem;
    while (bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * i;
        i *= 2;
    }
    cout << "the decimal number is>>" << dec;
}

int main()
{
    conversion c;
    c.get();
    c.con();

    return 0;
}
