//
// Created by Aniruddha on 4/20/2020.
//
#include <bits/stdc++.h>
#include "CRoute.h"

using namespace std;

CRoute::CRoute(unsigned int maxWp, unsigned int maxPoi)
{
    m_NextPoi=0;
    m_nextWp=0;
    if(maxPoi>10)
    {
        cout << "Max POI is assigned here 10. Can't extend beyond that" << endl;
        m_MaxPoi = 10;
    }
    else
    {
        m_MaxPoi = maxPoi;
    }

    m_pWaypoint = new CWaypoint[maxWp];
    m_pPoi = new CPOI*[maxPoi];
    m_pPoiDatabase = NULL;
}

CRoute::CRoute(const CRoute &origin)
{
    //Deep Copy
    m_MaxPoi = origin.m_MaxPoi;
    m_NextPoi = origin.m_NextPoi;
    m_maxWp = origin.m_maxWp;
    m_nextWp = origin.m_nextWp;
    m_pPoiDatabase = NULL;
    m_pPoi = new CPOI*[m_MaxPoi];
    m_pWaypoint = new CWaypoint[m_maxWp];
    for(unsigned int i=0;i<m_maxWp;i++)
    {
        m_pWaypoint[i] = origin.m_pWaypoint[i];
    }
}

void CRoute::connectToPoiDatabase(CPoiDatabase *pPoiDB)
{
    m_pPoiDatabase = pPoiDB;
}

void CRoute::addWaypoint(const CWaypoint &wp)
{
    if(m_pWaypoint==NULL)
    {
        cout << "No memory can be allocated" << endl;
    }
    else
    {
        if(m_nextWp <= m_maxWp)
        {
            m_pWaypoint[m_nextWp] = wp;
            m_nextWp++;
        }
    }
}

void CRoute::addPoi(string namePoi)
{
    //while(m_MaxPoi!=m_NextPoi) //fix this shit
    if(m_NextPoi <= m_MaxPoi)
    {
        if(m_pPoiDatabase->getPointerToPoi(namePoi))
        {
            m_pPoi[m_NextPoi] = m_pPoiDatabase->getPointerToPoi(namePoi);
            m_NextPoi++;
            //cout << m_NextPoi << endl;    //Displaying the number of nextPoi added in the PoiDatabase
        }
        else
        {
            cout << "Couldn't add the name " << namePoi << " in the DB" << endl;
        }
    }
}

double CRoute::getDistanceNextPoi(const CWaypoint &wp, CPOI &poi)
{
    double distanceToNextPOI = m_pPoi[0]->calculateDistance(wp);
    for(unsigned int i=0;i<m_NextPoi;i++)
    {
        if(m_pPoi[i]->calculateDistance(wp) < distanceToNextPOI)
        {
            distanceToNextPOI = m_pPoi[i]->calculateDistance(wp);
            poi = *m_pPoi[i];
        }
    }
    return distanceToNextPOI;
}

void CRoute::print()
{
    cout << endl;
    cout << "Following Waypoints " << m_nextWp << " and POI " << m_NextPoi << " are available" << endl;
    //For waypoints
    for(unsigned int i=0;i<m_nextWp;i++)
    {
        (m_pWaypoint+i)->print(1);
    }
    //For POI
    for(unsigned int i=0;i<m_NextPoi;i++)
    {
        m_pPoi[i]->print();
    }
}

//Destructor to clear up the memory of the dynamic arrays created
CRoute::~CRoute()
{
    delete []m_pWaypoint;
    delete []m_pPoi;
}