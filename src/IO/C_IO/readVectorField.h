#ifndef READVECTORFIELD_H
#define READVECTORFIELD_H

#include <basicSolverInfo.h>

#ifdef __cplusplus
extern "C" {
#endif

    double** readVectorField(const char* fname, const struct solverInfo* info);
    
#ifdef __cplusplus
}
#endif
    

#endif // READVECTORFIELD_H
