//
// Created by Aniruddha on 4/20/2020.
//

#ifndef NAVIGATIONSYSTEMREVISION_CGPSSENSOR_H
#define NAVIGATIONSYSTEMREVISION_CGPSSENSOR_H

#include<bits/stdc++.h>
#include "CWaypoint.h"

using namespace std;

class CGPSSensor : public CWaypoint
{
public:
    CWaypoint getCurrentPosition();
    CGPSSensor();
};

#endif //NAVIGATIONSYSTEMREVISION_CGPSSENSOR_H
