#include <iostream>
#include "lib.h"
using namespace std;
bool cosa(char &a);
int main() {
char b;
cin>>b;
if (cosa(b)==true)
{
    cout<<b;
}
if (cosa(b)==false)
{
    cout<<"errore";
}

        return 0;
    }

