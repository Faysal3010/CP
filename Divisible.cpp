// divisible
#include <iostream>
using namespace std;
void divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);
    cout << c1 + c2 - c3 << endl;
}

int main(void)
{
    int n, a, b;
    cin >> n >> a >> b;
    divisible(n, a, b);
    return 0;
}
