//
// Created by Aniruddha on 4/20/2020.
//

#include "CPOI.h"
#include <bits/stdc++.h>
using namespace std;

CPOI::CPOI(t_poi type, string name, string description, double latitude, double longitude)
{
    //CWaypoint(name, latitude, longitude);
    m_name = name;
    m_latitude = latitude;
    m_longitude = longitude;
    m_type = type;
    m_description = description;
}

void CPOI::getAllDataByReference(string &name, double &latitude, double &longitude, t_poi &type, string &description)
{
    name = m_name;
    latitude = m_latitude;
    longitude = m_longitude;
    type = m_type;
    description = m_description;
}

void CPOI::print()  //Print the types of POI
{
    switch(m_type)
    {
        case RESTAURANT:
            cout<< "Point of Interest: " << this->m_type << endl;
            cout << "Type of Restaurant is: " << this->m_description << endl;
            cout << "Name of the place: " << this->m_name << " on Latitude: " << this->m_latitude << " and Longitude: " << this->m_longitude << endl;
            cout << endl;
            break;

        case TOURISTIC:
            cout<< "Point of Interest: " << this->m_type << endl;
            cout << "Touristic spot is: " << this->m_description << endl;
            cout << "Name of the place: " << this->m_name << " on Latitude: " << this->m_latitude << " and Longitude: " << this->m_longitude << endl;
            cout << endl;
            break;

        case GAS_STATION:
            cout<< "Point of Interest: " << this->m_type << endl;
            cout << "Gas station is: " << this->m_description << endl;
            cout << "Name of the place: " << this->m_name << " on Latitude: " << this->m_latitude << " and Longitude: " << this->m_longitude << endl;
            cout << endl;
            break;

        case UNIVERSITY:
            cout<< "Point of Interest: " << this->m_type << endl;
            cout << "University is: " << this->m_description << endl;
            cout << "Name of the place: " << this->m_name << " on Latitude: " << this->m_latitude << " and Longitude: " << this->m_longitude << endl;
            cout << endl;
            break;

        case NONE:
            cout<< "Point of Interest: " << this->m_type << endl;
            cout << "Description of the place is: " << this->m_description << endl;
            cout << "Name of the place: " << this->m_name << " on Latitude: " << this->m_latitude << " and Longitude: " << this->m_longitude << endl;
            cout << endl;
            break;

        default:
            cout << "None of the POI matches. Wrong condition" << endl;
            cout << endl;

    }
}

/*string CPOI::getPOIType()
{
    switch (m_type)
    {
        case RESTAURANT:
            return "RESTAURANT";
            break;

        case TOURISTIC:
            return "TOURISTIC";
            break;

        case GAS_STATION:
            return "GAS STATION";
            break;

        case UNIVERSITY:
            return "UNIVERSITY";
            break;

        case NONE:
            return "NONE";
            break;

        default:
            return "Not a POI TYPE";
            break;
    }
}

string CPOI::getDescription()
{
    return m_description;
}

void CPOI::print(int format)
{
    switch (m_type)
    {
        case RESTAURANT:
            cout << "Type: RESTAURANT. Description: " << m_description << endl;
            break;

        case TOURISTIC:
            cout << "Type: TOURISTIC. Description: " << m_description << endl;
            break;

        case GAS_STATION:
            cout << "Type: GAS STATION. Description: " << m_description << endl;
            break;

        case UNIVERSITY:
            cout << "Type: UNIVERSITY. Description: " << m_description << endl;
            break;

        case NONE:
            cout << "Select a POI type. Otherwise 'NONE' will be inserted" << endl;
            break;

        default:
            cout << "Not a valid POI selected" << endl;
            break;
    }
}*/

CPOI::~CPOI()   //Destructor method to cleanup
{
    //Nothing to do.
}
