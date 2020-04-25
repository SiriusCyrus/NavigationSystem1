//
// Created by Aniruddha on 4/20/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CPOI_H
#define NAVIGATIONSYSTEMREVISION_CPOI_H

#include<bits/stdc++.h>
#include "CWaypoint.h"

using namespace std;

enum t_poi
{
    RESTAURANT, TOURISTIC, GAS_STATION, UNIVERSITY, NONE
};

class CPOI : public CWaypoint
{
private:
    t_poi m_type;
    string m_description;

public:
    void print();
    CPOI(t_poi type = NONE, string name = " ", string description = " ", double latitude = 0.0, double longitude = 0.0);
    ~CPOI();
    void getAllDataByReference(string &name, double &latitude, double &longitude, t_poi &type, string &description);
    //void print(int format);
    //string getPOIType();    //Needed for Persistent Storage
    //string getDescription();    //Needed for Persistent Storage
};

#endif //NAVIGATIONSYSTEMREVISION_CPOI_H
