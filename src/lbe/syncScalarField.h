#ifndef SYNCSCALARFIELD_H
#define SYNCSCALARFIELD_H

#include <basicSolverInfo.h>
#include <twoPhasesFields.h>
#include <mpi.h>

void syncScalarField( struct solverInfo* info, double* fld );

#endif // SYNCSCALARFIELD_H
