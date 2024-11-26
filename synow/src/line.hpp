#pragma once

#include <string>
#include <pybind11/pybind11.h>

class Line
{
public:
    Line(const pybind11::dict& lineParams);

    const int an;
    const int ai;
    const double tau0;
    const double pwrlawin;
    const double vmine;
    const double vmaxe;
    const double ve;
    const double vmaxg;
    const double sigma_v;
    const double temp;
    const string profile;

    void updateParams(const pybind11::dict& lineParams);

private:

};
