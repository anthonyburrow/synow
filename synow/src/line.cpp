#include <iostream>
#include <pybind11/pybind11.h>

using namespace std;
namespace py = pybind11;

Line::Line(const py::dict& lineParams)
  : an(lineParams["an"]),
    ai(lineParams["ai"]),
    tau0(lineParams["tau0"]),
    pwrlawin(lineParams["pwrlawin"]),
    vmine(lineParams["vmine"]),
    vmaxe(lineParams["vmaxe"]),
    ve(lineParams["ve"]),
    vmaxg(lineParams["vmaxg"]),
    sigma_v(lineParams["sigma_v"]),
    temp(lineParams["temp"]),
    profile(lineParams["profile"])
{

}

Line::updateParams(const py::dict& lineParams)
{
    tau0 = lineParams["tau0"];
    pwrlawin = lineParams["pwrlawin"];
    vmine = lineParams["vmine"];
    vmaxe = lineParams["vmaxe"];
    ve = lineParams["ve"];
    vmaxg = lineParams["vmaxg"];
    sigma_v = lineParams["sigma_v"];
    temp = lineParams["temp"];
    profile = lineParams["profile"];
}
