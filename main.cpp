#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include "CWaypoint.h"
#include "CGPSSensor.h"
#include "CNavigationSystem.h"

int main()
{
    //To get data manually
    string getName;
    double getLatitude, getLongitude;

    cout << "Navigation System started" << endl;
    //Creating parameters for travelling
    CWaypoint Amsterdam, GrossGerau, MarktSchwaben, Berlin;

    //Setting the values in the Waypoints
    Amsterdam.set("Amsterdam", 52.3702, 4.8952);
    GrossGerau.set("Gross-Gerau", 49.92139, 8.48255);
    MarktSchwaben.set("Markt Schwaben",48.1909, 11.8630);
    Berlin.set("Berlin", 52.5200, 13.4050);
    cout << endl;

    //Printing the values in both formats
    GrossGerau.print(DEGREE);
    MarktSchwaben.print(MINUTES_SECONDS);
    cout << endl;

    //Test all the functions
    string print_name = Berlin.getName();
    double print_latitude = Berlin.getLatitude();
    double print_longitude = Berlin.getLongitude();
    cout << "Place name is: " << print_name << " with latitude: " << print_latitude << " and longitude is: " << print_longitude << endl;
    cout << endl;

    //Get all data by reference
    Amsterdam.getAllDataByReference(getName,getLatitude,getLongitude);
    cout << endl;
    MarktSchwaben.getAllDataByReference(getName,getLatitude,getLongitude);
    cout << endl;
    GrossGerau.getAllDataByReference(getName,getLatitude,getLongitude);
    cout << endl;

    //Calculate distance
    double distance1 = MarktSchwaben.calculateDistance(GrossGerau);
    cout << "The distance between Markt Schwaben & Gross-Gerau is: " << distance1 << "km" << endl;
    double distance2 = Berlin.calculateDistance(GrossGerau);
    cout << "The distance between Berlin & Gross-Gerau is: " << distance2 << "km" << endl;
    double distance3 = Amsterdam.calculateDistance(Berlin);
    cout << "The distance between Amsterdam & Berlin is: " << distance3 << "km"<< endl;


    // Testing the GPS Sensor class
    cout << endl;
    cout << "Testing CGPS Sensor Class" << endl;
    CGPSSensor sensor;
    CWaypoint Waypointobj1 = sensor.getCurrentPosition();
    Waypointobj1.print(DEGREE);
    cout << endl;

    //Testing the CPOI class
    CPOI Mensa(RESTAURANT,"Mensa", "Campus canteen", 11.9076, 9.5322);
    Mensa.print();

    //Testing the Navigation System class
    cout << "Navigation System" << endl;
    CNavigationSystem NavSystem;
    NavSystem.run();

    return 0;
}
