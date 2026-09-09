#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=30;
    int *ptr= &a;
    int **ptr2=&ptr;

    cout<< "Value of a usinff ptr2:" <<**ptr2 << endl;
    cout<< "Adress of ptr itself:"<<ptr2<< endl;
    return 0;
}
