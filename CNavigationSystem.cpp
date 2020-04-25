//
// Created by Aniruddha on 4/20/2020.
//

#include <bits/stdc++.h>
#include "CNavigationSystem.h"
using namespace std;

CNavigationSystem::CNavigationSystem() : m_Route(10,10)
{
    //Nothing to add here
}

void CNavigationSystem::enterRoute()
{
    //Adding Waypoints
    CWaypoint Kolkata("Kolkata",22.5726, 88.3639);
    CWaypoint Mumbai("Mumbai", 19.0760, 72.8777);
    CWaypoint Karlsruhe("Karlsruhe", 49.0069, 8.4037);
    CWaypoint Landskronstrasse("Landskronstrasse", 49.853308, 8.646835);
    this->m_Route.addWaypoint(Landskronstrasse);
    this->m_Route.addWaypoint(Kolkata);
    this->m_Route.addWaypoint(Mumbai);
    this->m_Route.addWaypoint(Karlsruhe);

    //Connecting POIDatabase to Route
    m_Route.connectToPoiDatabase(&m_PoiDatabase);

    //Adding POI to POIDatabase
    m_PoiDatabase.addPoi(RESTAURANT, "Mother India", "Indian Restaurant", 48.1909, 11.8630);
    m_PoiDatabase.addPoi(TOURISTIC, "Neuschwanstein Castle", "Old heritage castle", 47.5576, 10.7498);
    m_PoiDatabase.addPoi(GAS_STATION, "Aral", "Local gas station", 49.1933, 7.6787);
    m_PoiDatabase.addPoi(UNIVERSITY, "TUM", "Oldest University in Germany", 48.1497, 11.5679);


    //Fetching Data from POIDatabase
    m_Route.addPoi("TUM");
    m_Route.addPoi("Mother India");
    m_Route.addPoi("Aral");
    m_Route.addPoi("Neuschwanstein Castle");
}

void CNavigationSystem::printRoute()
{
    this->m_Route.print();
}

void CNavigationSystem::printDistanceCurPosNextPoi()
{
    CPOI Object;
    string name;
    double latitude = 0.0, longitude = 0.0;
    CWaypoint CurrentPosition;
    CurrentPosition = m_GPSSensor.getCurrentPosition();
    CurrentPosition.print(1);

    //Check if the current location is valid
    cout << endl;
    CurrentPosition.getAllDataByReference(name, latitude,longitude);

    if(!name.empty())
    {
        double distance = m_Route.getDistanceNextPoi(CurrentPosition, Object);
        cout << "The distance between current position and next POI is: " << distance << endl;
        Object.print();
    }
    else
    {
        cout << "Invalid sensor data." << endl;
    }
}

void CNavigationSystem::run()
{
    this->enterRoute();
    this->printRoute();
    this->printDistanceCurPosNextPoi();
}
