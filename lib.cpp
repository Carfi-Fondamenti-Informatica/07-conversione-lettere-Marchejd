#include "cosaLib.h"
using namespace std;
bool cosa(char &a)
{
    if (((int) a >= 65 && (int) a <= 90) or ((int) a >= 97 && (int) a <= 122))
    {
        if ((int) a >= 65 && (int) a <= 90) 
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
