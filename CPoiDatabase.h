//
// Created by Aniruddha on 4/20/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CPOIDATABASE_H
#define NAVIGATIONSYSTEMREVISION_CPOIDATABASE_H

#include <bits/stdc++.h>
#include "CPOI.h"

using namespace std;

class CPoiDatabase
{
private:
    CPOI m_POI[10];
    int m_noPoi;
    //map <string, CPOI> m_WaypointPoi;

public:
    CPoiDatabase();
    void addPoi(t_poi type, string name, string description, double latitude, double longitude);
    CPOI *getPointerToPoi(string name);
};

#endif //NAVIGATIONSYSTEMREVISION_CPOIDATABASE_H
