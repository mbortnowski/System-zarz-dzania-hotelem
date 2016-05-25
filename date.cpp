#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    struct tm a = {0,0,0,24,5,104}; /* June 24, 2004 */
    struct tm b = {0,0,0,5,6,104}; /* July 5, 2004 */
    time_t x = mktime(&a);
    time_t y = mktime(&b);
    if ( x != (time_t)(-1) && y != (time_t)(-1) )
    {
        double difference = difftime(y, x) / (60 * 60 * 24);
        cout << ctime(&x);
        cout << ctime(&y);
        cout << "difference = " << difference << " days" << endl;
    }
    return 0;
}
