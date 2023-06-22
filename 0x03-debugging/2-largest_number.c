#include "main.h"
/*
* largest_number - returns the largest of 3 numbers
*/
int largest_number(int x, int y, int z)
{
int largest;
if (x > y && x > z)
{
largest = x;
}
else if (x > y && z > x)
{
largest = z;
}
else if (y > z)
{
largest = y;
}
else
{
largest = x;
}
return (largest);
}
