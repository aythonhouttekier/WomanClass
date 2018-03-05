#include <iostream>
#include "woman.h"

using namespace std;

int main()
{
    int number;

    //in Java: Woman mila = new Woman();
    Woman mila(19, "Mila");

    cout << "Mila: " << mila.to_string() << endl;
    cout << "Hello there!" << endl;


    return 0;
}
