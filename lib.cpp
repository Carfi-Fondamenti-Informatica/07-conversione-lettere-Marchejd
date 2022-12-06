
#include "lib.h"
bool lettera(char &a)
{
    if ((a >= 65 &&  a <= 90) or (a >= 97 && a <= 122))
    {
        if ( a >= 65 &&  a <= 90) {
            a = a + 32;
        }
        else
        {
            a = a - 32;
        }
        return true;
    }
    else
    {
        return false;
    }

}
