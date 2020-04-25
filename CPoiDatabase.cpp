//
// Created by Aniruddha on 4/20/2020.
//

#include <bits/stdc++.h>
#include "CPoiDatabase.h"

using namespace std;

CPoiDatabase::CPoiDatabase()
{
    m_noPoi = 0;    //Initialising the number of POI variables as 0;
}

void CPoiDatabase::addPoi(t_poi type, string name, string description, double latitude, double longitude)
{
    if (m_noPoi!=9)
    {
        CPOI POIobject(type,name,description,latitude,longitude);
        m_POI[m_noPoi] = POIobject;
        m_noPoi++;
    }
    else
    {
        cout << "POI Database is full" << endl;
    }
}

CPOI* CPoiDatabase::getPointerToPoi(string name)
{
    while(m_noPoi!=9)
    {
        for(int i=0;i<m_noPoi;i++)
        {
            if(m_POI[i].getName() == name)
                return m_POI+i;
        }
    }
    return NULL;
}
