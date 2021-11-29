/* Body file for function sender
 * Generated by TASTE on 2021-07-02 18:36:53
 * You can edit this file, it will not be overwritten
 * Provided interfaces : trigger
 * Required interfaces : image
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = any
 *   |_ Taste::coordinates = 91662 76325 121615 120171
 * Timers              : 
 */

#include "sender.h"
//#include "raw.h"
#include <stdio.h>


void sender_startup(void)
{
   // Write your initialisation code, but DO NOT CALL REQUIRED INTERFACES
   puts ("[sender] Startup");
}

void sender_PI_trigger(void)
{
    asn1SccRawData raw_data;
    int i;
    for (i=0; i<4194304; i++){
        raw_data.arr[i]=0x2;
    }
    puts ("Sending image");
   sender_RI_image( &raw_data );
}


void sender_PI_testint( const asn1SccMyInteger *IN_int2 ){
    if (*IN_int2 ==0x0 )
        puts("[Receiver] Correct Data\n");
    else
        printf("WRONG VALUES: %d\n", *IN_int2);
    
    sender_RI_a( IN_int2 );
}


void sender_PI_b( const asn1SccMyInteger *IN_varb ){
    sender_RI_c( IN_varb );
}
void sender_PI_d( const asn1SccMyInteger *IN_vard ){
    sender_RI_e( IN_vard );
}
void sender_PI_f( const asn1SccMyInteger *IN_varf ){
    sender_RI_g( IN_varf ); 
}

void sender_PI_h( const asn1SccMyInteger *IN_varh ){
    sender_RI_i( IN_varh );
}
void sender_PI_j( const asn1SccMyInteger *IN_varj ){
    sender_RI_k( IN_varj );
}
void sender_PI_l( const asn1SccMyInteger *IN_varl ){
    sender_RI_m( IN_varl );
}
void sender_PI_n( const asn1SccMyInteger *IN_varn ){
    sender_RI_o( IN_varn );
}
void sender_PI_p( const asn1SccMyInteger *IN_varp ){
    sender_RI_q( IN_varp ); 
}

void sender_PI_r( const asn1SccMyInteger *IN_varr ){
    sender_RI_s( IN_varr );
}
void sender_PI_t( const asn1SccMyInteger *IN_vart ){
    sender_RI_u( IN_vart );
}
void sender_PI_v( const asn1SccMyInteger *IN_varv ){
    sender_RI_w( IN_varv );
}
void sender_PI_x( const asn1SccMyInteger *IN_varx ){
    sender_RI_y( IN_varx );
}

void sender_PI_z( const asn1SccMyInteger *IN_varz ){
    puts("DONE");
}
