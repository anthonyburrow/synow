#include <iostream>
#include <pybind11/pybind11.h>

#include "line.hpp"

using namespace std;
namespace py = pybind11;


Synow::Synow(const py::dict& globalParams)
  : vphot(lineParams["vphot"]),
    vmax(lineParams["vmax"]),
    TPlanck(lineParams["TPlanck"]),
    taumin(lineParams["taumin"]),
    grid(lineParams["grid"]),
    stspec(lineParams["stspec"]),
    delta_v(lineParams["delta_v"]),
{

}

void Synow::addLine(const py::dict& lineParams)
{
    const int& an = lineParams["an"];
    const int& ai = lineParams["ai"];
    for (Line line : lines)
    {
        if (line.an == an && line.ai == ai)
        {
            line.updateParams(lineParams);
            return;
        }
    }

    Line line(lineParams);
    lines.push_back(line);
}
