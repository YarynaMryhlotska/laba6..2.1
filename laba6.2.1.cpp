//laba6.2.1
#include <iostream>

using namespace std;

void Create(int*& a, int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        a[i] = -50 + rand() % (101);
        cout << a[i] << " ";
    }
}

void P(int*& a, int n, int& p, int& number)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2 == 0) || (-a[i] % 2 == 0))
        {
            p = a[i];
            number = 1;
            break;
        }
    }
}

void R(int*& a, int& p, int n, int& number)
{
    for (int i = 0; i <= n; i++)
    {
        if ((p < a[i]) && (a[i] % 2 == 0) && (a[i] > 0) || ((p > a[i]) && (-a[i] % 2 == 0)))
        {
            p = a[i];
            number = i;
        }
    }
}


void R_(int*& a, int n, int p, int t, int number)
{
    t = a[0];
    a[0] = p;
    a[number] = t;
    for (int i = 0; i <= n - 1; i++)
        cout << a[i] << " ";
}




int main()
{
    srand((unsigned)time(NULL));
    int n;
    int a = -50;
    int t = 0;
    int number = 0;


    cout << "n = "; cin >> n;
    int* r = new int[n];

    Create(r, n);
    P(r, n, a, number);
    R(r, a, n, number);
    cout << endl;
    R_(r, n, a, t, number);

    return 0;
}