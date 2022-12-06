#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H
#include "dialog.h"
#include <string.h>
#include <iostream>

class accommodation
{
public:
    accommodation();
 private:
    int  id_reservation;
    int  id_accomodation,hotel_telph,MOTransport_int;
    //string hotel_name,MOTransport ;
    float hotel_rate;
};

#endif // ACCOMMODATION_H
