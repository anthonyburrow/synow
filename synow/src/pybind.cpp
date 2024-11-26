#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>

#include "Synow.hpp"

using namespace std;
namespace py = pybind11;

PYBIND11_MODULE(synow, module_handle) {
    module_handle.doc() = "synow spectrum synthesis.";

    py::class_<Synow>(module_handle, "Synow")
        .def(
            py::init<const py::dict&>()
        )
        .def(
            "add_line",
            &Synow::addLine,
            py::arg("line_params")
        )
        // Properties & Attributes
        .def_readonly("vphot", &Synow::vphot)
        .def_readonly("vmax", &Synow::vmax)
        .def_readonly("TPlanck", &Synow::TPlanck)
        .def_readonly("taumin", &Synow::taumin)
        .def_readonly("grid", &Synow::grid)
        .def_readonly("stspec", &Synow::stspec)
        .def_readonly("delta_v", &Synow::delta_v)
    ;
}