//
// Created by Aniruddha on 4/20/2020.
//
#include <bits/stdc++.h>
#include "CGPSSensor.h"

using namespace std;

CGPSSensor::CGPSSensor()
{
    //Do nothing here
}

CWaypoint CGPSSensor::getCurrentPosition()
{
    string name;
    double latitude, longitude;
    cout << "Enter place name: ";
    cin >> name;
    cout << "Enter Latitude: ";
    cin >> latitude;
    cout << "Enter Longitude: ";
    cin >> longitude;
    CWaypoint CurrentWaypoint;
    CurrentWaypoint.set(name, latitude, longitude);
    return CurrentWaypoint;

}
