/*
  Abstract base class for DdQq models. Only provides interface
 */


#ifndef BASICLBMODEL_H
#define BASICLBMODEL_H


#include <vector>
#include <string>
#include <Vector3.h>
#include <dictionary.h>
#include <pdf.h>
#include <Matrix.h>

class basicLBModel {


    /* ----------------------  Protected members ----------------------  */

protected:

    // Dimension
    uint _D;

    // Discrete lattice velocities
    std::vector<Vector3> _latticeVel;

    // PDF weights
    std::vector<scalar> _omega;
    pdf _pdfomega;
    
    // Reverse direction
    std::vector<uint> _reverse;

    // Specular direction
    std::vector<uint> _specular;

    // Model label
    std::string _name;

    // Squared sound speed
    double _cs2;

    // Lattice size
    double _lsize;

    // Lattice speed
    double _c;

    // MRT matrices
    Matrix _M;
    Matrix _invM;

    // Principal indices
    std::vector< std::vector<int> > _principal;

    // Pseudopotential weights
    std::vector<double> _weights;



    /* ----------------------  Public member functions ----------------------  */

public:


    // Constructors and destructors

    // Default constructor
    basicLBModel();

    // Default destructor
    ~basicLBModel();

    /* // The copy-constructor */
    /* LBMmodel(const LBMmodel& lbm); */



    // Member modification

    // Set lattice size
    const void setSpeed();
    
    

    // Access members

    // Discrete lattice velocities
    const std::vector<Vector3>& latticeVel() const;

    // Dimension
    virtual const uint& D() const = 0;

    // Number of lattice velocities
    const uint Q() const;

    // Square of sound speed
    const scalar& cs2() const;

    // Lattice size
    const scalar& c() const;    

    // PDF weights
    const scalar& omega(const uint& id) const;

    // PDF weights
    const std::vector<scalar>& omega() const;

    // PDF weights
    const pdf& pdfOmega() const;

    // Reverse index
    const uint& reverse(const uint& id) const;

    // Reverse index
    const std::vector<uint>& reverse() const;

    // Specular index
    const uint& specular(const uint& id) const;
    const std::vector<uint>& specular() const;
    
    // Model name
    const std::string& name() const;

    // Velocity with id
    const Vector3& at(const uint& id) const;

    // Velocity index
    const int velId( const Vector3& v ) const;

    // Main index
    virtual const bool is_principal(const uint& id) const;

    // Lattice Size
    const double& lsize() const;

    // MRT matrices
    const Matrix& M() const;

    const Matrix& invM() const;


    // Principal indices
    virtual const std::vector< std::vector<int> >& principal() const;

    // Pseudopotential indices
    virtual const std::vector< double >& weights() const;    

};





#endif // BASICLBMODEL_H
