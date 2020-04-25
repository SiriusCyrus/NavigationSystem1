//
// Created by Aniruddha on 4/20/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CNAVIGATIONSYSTEM_H
#define NAVIGATIONSYSTEMREVISION_CNAVIGATIONSYSTEM_H

#include "CPOI.h"
#include "CRoute.h"
#include "CGPSSensor.h"
#include "CPoiDatabase.h"
#include "CWaypoint.h"
#include <bits/stdc++.h>

using namespace std;

class CNavigationSystem
{
private:
    CGPSSensor m_GPSSensor;
    CRoute m_Route;
    CPoiDatabase m_PoiDatabase;

public:
    CNavigationSystem();
    void run();

private:
    void enterRoute();
    void printRoute();
    void printDistanceCurPosNextPoi();
};


#endif //NAVIGATIONSYSTEMREVISION_CNAVIGATIONSYSTEM_H
