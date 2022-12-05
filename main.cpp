#include <iostream>
#include "lib.h"
bool cosa(char &a);

using namespace std;
int main (){
    char b;
    cin>>b;
    if ( cosa(b)==true)
    {
        cout<<b;
    }
        else 
        {
            cout<<"errore";
        }
        return 0;
    }
