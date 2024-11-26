#pragma once

#include <pybind11/pybind11.h>
#include <vector>

#include "line.hpp"

class Synow
{
public:
    Synow();

    const double vphot;
    const double vmax;
    const double TPlanck;
    const double taumin;
    const int grid;
    const double stspec;
    const double delta_v;

    std::vector<Line> lines;

    void addLine(const pybind11::dict& lineParams);

private:

};
