\#ifndef BASICSOLVERINFO_H
#define BASICSOLVERINFO_H

#include <time.h>
#include <sys/time.h>

struct timeInfo {

    // Simulation parameters

    // Start time
    double start;

    // End time
    double end;

    // Time step
    double tstep;

    // Write interval (write every writeInterval steps)
    unsigned int writeInterval;

    // Current time
    double current;

    // Start time (time measurement)
    time_t st;
    struct timeval stt;

    // Time step
    unsigned int stp;
    
};



struct latticeInfo {

    double size;
    double cs2;
    double c;
    unsigned int nlocal;
    int d;
    int Q;
    int** vel;
    double* omega;
    
};

struct fieldsInfo {

    double** colMat;
    double** colMatA;
    double** colMatB;

    double** srcMat;
    double** srcMatA;
    double** srcMatB;
    
    double sigma;
    double D;
    double phi_A;
    double phi_B;
    double M_phi;
    double gx;
    double gy;
    double gz;
    double rho_A;
    double rho_B;
    double eta;
    double beta;
    double kappa;
    
};



struct mpiInfo {

    // Process id
    unsigned int pid;

    // Total number of ghosts
    unsigned int nghosts;

    // Send ghosts
    unsigned int nSendGhosts;

    // Recv ghosts
    unsigned int nRecvGhosts;

    // Send ghost ids
    unsigned int** sendGhostIds;

    // Recv ghost ids. Id = nlocal + id
    unsigned int** recvGhostIds;
    
};


struct solverInfo {

    struct timeInfo time;

    struct latticeInfo lattice;

    struct fieldsInfo fields;

    struct mpiInfo parallel;
};


#endif // BASICSOLVERINFO_H
