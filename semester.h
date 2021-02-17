#include <iostream>
#include <String>

using namespace std;

class semester
{
    public:
    semester();
    semester(string season, int year);

    void changeSeason(string newSeason);
    void changeYear(int newYear);

    string getSeason();
    int getYear();

    void setSeason(string setSeason);
    void setYear(int setYear);

    private:
    string Season;
    int Year;
};