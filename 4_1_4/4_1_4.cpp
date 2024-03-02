#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int divisor = 2;
    int divisible = N;
    string number = "";

    while (divisible != 0)
    {
        number = to_string(divisible % divisor) + number; // остаток
        divisible /= divisor;
        divisor++;

    }

    cout << number << endl;


}
