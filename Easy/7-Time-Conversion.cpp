https://www.hackerrank.com/challenges/time-conversion/problem
Problem:
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. 
Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.
Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
Solution: 

#include <bits/stdc++.h>

using namespace std;
int main() {
    string time;
    cin >> time;

    string output = time.substr(0, 8);
    string ampm = time.substr(time.size() - 2);
    string hourString = time.substr(0, 2);

    if (ampm == "PM" && hourString != "12") {
        int hour = stoi(hourString);
        hour = (hour + 12) % 24;

        stringstream ss;
        ss << hour;

        output[0] = ss.str()[0];
        output[1] = ss.str()[1];
    }
    else if (ampm == "AM" && hourString == "12") {
        output[0] = output[1] = '0';
    }

    cout << output;

    return 0;
}
