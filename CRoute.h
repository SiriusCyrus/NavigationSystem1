//
// Created by Aniruddha on 4/20/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CROUTE_H
#define NAVIGATIONSYSTEMREVISION_CROUTE_H

#include <bits/stdc++.h>
#include "CWaypoint.h"
#include "CPoiDatabase.h"
#include "CPOI.h"

using namespace std;

class CRoute : public CPOI
{
private:
    CWaypoint *m_pWaypoint;
    unsigned int m_maxWp;
    unsigned int m_nextWp;
    CPOI **m_pPoi;
    unsigned int m_MaxPoi;
    unsigned int m_NextPoi;
    CPoiDatabase *m_pPoiDatabase;

public:
    CRoute(unsigned int maxWp, unsigned int maxPoi);
    CRoute(CRoute const &origin);
    ~CRoute();
    void connectToPoiDatabase(CPoiDatabase *pPoiDB);
    void addWaypoint(CWaypoint const &wp);
    void addPoi(string namePoi);
    double getDistanceNextPoi(CWaypoint const &wp, CPOI &poi);
    void print();

};
#endif //NAVIGATIONSYSTEMREVISION_CROUTE_H
