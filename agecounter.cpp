#include<bits/stdc++.h>
#include<string>
#include<ctime>
using namespace std;

void datecounter(string eventdate)
{
    time_t now = time(0);
    tm *loc= localtime(&now);
    int presentdate= ((loc->tm_year+1900)*365)+ ((loc->tm_mon+1)*30+loc->tm_mday);
    int eventdate1=  (stoi(eventdate.substr(0,4))*365)+(stoi(eventdate.substr(5,7))*30)+ (stoi(eventdate.substr(8,10)));
    int age = (presentdate -eventdate1);
    int year = age/360;
    int months= (age%360)/30;
    int days = age - ((year*360)+(months*30));

    if(year!=0)
    {
        if(year==1)
        {
            cout<< year<<" year"<<" ";
        }
        else
        {
            cout<<year<<" years"<<" ";
        }
    }
    if(months!=0)
    {
        if(months==1)
        {
            cout<< months<<" month"<<" ";
        }
        else
        {
            cout<<months<<" months"<<" ";
        }
    }
    if(days!=0)
    {
        if(days==1)
        {
            cout<< days<<" day";
        }
        else
        {
            cout<<days<<" days";
        }
    }


}

int main()
{
    string eventdate;
    cin>>eventdate;
    datecounter(eventdate);
}