#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char carattere;
    cin>>carattere;
    if (lettera(carattere)==true)
        cout<<carattere;
    else
        cout<<"errore";
    return 0;
}
