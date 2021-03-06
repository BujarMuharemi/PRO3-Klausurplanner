//
// Created by cc on 1/7/20.
//

#ifndef PRO3_KLAUSURPLANNER_TIMESLOT_H
#define PRO3_KLAUSURPLANNER_TIMESLOT_H

#include "gKlausur.h"
#include <vector>


class TimeSlot {
    std::vector<gKlausur> geplanteKlausurListe;
public:
    TimeSlot(const std::vector<gKlausur> &geplanteKlausurListe);

    TimeSlot();

    const std::vector<gKlausur> &getGeplanteKlausurListe() const;

    void setGeplanteKlausurListe(std::vector<gKlausur> &geplanteKlausurListe);
};

#endif //PRO3_KLAUSURPLANNER_TIMESLOT_H
