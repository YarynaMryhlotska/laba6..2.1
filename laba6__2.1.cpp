//laba5.5
#include <iostream>
using namespace std;

void Create(int* &a, int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        a[i] = -20 + rand() % (41);
        cout << a[i] << " ";
    }
}

void S(int* &a, int n, int &b, int &number)
{
    for (int i = 0; i <= n; i++)
    {
        if ((a[i] % 2 == 0) || (-a[i] % 2 == 0))
        {
            b = a [i];
            number = 1;
            break;
        }
    }
}
 
    void result(int*& a, int n, int b, int ty, int& number)
    {
        ty = a[n - 1];
        a[n - 1] = b;
        a[number] = ty;
        for (int i = 0; i <= n - 1; i++)
            cout << a[i] << "";
    }




int main()
{ 
    srand((usinged)time(NULL));
    cout << "n ="; cin >> n;
    int* q = new int[n];
   
    Create(q, n);
    S(q, n, a, number);
    cout <<  endl;
    result(q, n, a, ty, number);

    return 0;
}
