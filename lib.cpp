
# include "lib.h"
using namespace std;
bool cosa(char &a)
{
    if (65<=a && a<90)
    {
        a=a+32;
        return true;
    }
    else if (97<=a && a<=122)
    {
        a=a-32;
        return true;
    }
    else 
    {
        return false;
    }
