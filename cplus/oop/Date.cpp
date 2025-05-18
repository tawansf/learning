#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timestamp;
    time(&timestamp);

    cout << ctime(&timestamp);

    struct tm datetime;
    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 0;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    mktime(&datetime);

    string weekday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    cout << weekday[datetime.tm_wday] << endl;

    return 0;
}
