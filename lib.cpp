#include "lib.h"
bool cosa(char &a)
{
    if (((int) a > 65 && (int) a < 90) or ((int) a > 97 && a < 122))
    {
        if ((int) a > 65 && (int) a < 90)
        {
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
