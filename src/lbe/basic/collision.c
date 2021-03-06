#include <collision.h>
#include <liMRTCollision.h>
#include <liSRTCollision.h>
#include <temperatureCollision.h>
#include <stdlib.h>

void collision( struct latticeMesh* mesh, struct macroFields* mfields, struct lbeField* field ) {


    // Apply collision model
    switch(field->colId) {

    // Li MRT Model
    case 0:
	liMRTCollision( mesh, mfields, field );
	break;


    // Li SRT Model
    case 1:
	liSRTCollision( mesh, mfields, field );
	break;

	
    // Li SRT Model. Temperature
    case 2:
	temperatureCollision( mesh, mfields, field );
	break;
	
	
    default:
	printf("\n\n[ERROR]  Collision model is not yet implemented\n\n");
	exit(1);
	break;	
	
    }
    

};
