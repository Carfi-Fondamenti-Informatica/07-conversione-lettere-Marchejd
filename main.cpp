#include <iostream>
#include "LIb.h"
using namespace std;
bool cosa(char &a);
int main() {
char b;
cin>>b;
if (cosa(b)==true)
{
    cout<<b;
}
else
{
    cout<<"errore"<<endl;
}

        return 0;
    }
