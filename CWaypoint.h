//
// Created by Aniruddha on 4/19/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CWAYPOINT_H
#define NAVIGATIONSYSTEMREVISION_CWAYPOINT_H

#include <bits/stdc++.h>
#define DEGREE 1
#define MINUTES_SECONDS 2
using namespace std;

enum wp_type
{
    WAYPOINT, ERROR
};

class CWaypoint
{
protected:
    string m_name;
    double m_latitude;
    double m_longitude;
    //wp_type m_type;

public:
    CWaypoint();
    CWaypoint(string name, double latitude, double longitude);
    void set(string name, double latitude, double longitude);

    //CWaypoint(string name, double latitude, double longitude, wp_type type);
    //void set(string name, double latitude, double longitude, wp_type type);
    string getName();
    double getLatitude();
    double getLongitude();
    //string getType();
    void getAllDataByReference(string &name, double &latitude, double &longitude);
    double calculateDistance(const CWaypoint &wp);  //Calculate distance

    void print(int format); //Print in Degree or in Minutes_Seconds
    virtual ~CWaypoint();

private:
    void transformLongitude2degmmss(int &deg, int &mm, double &ss);
    void transformLatitude2degmmss(int &deg, int &mm, double &ss);
};

#endif //NAVIGATIONSYSTEMREVISION_CWAYPOINT_H
