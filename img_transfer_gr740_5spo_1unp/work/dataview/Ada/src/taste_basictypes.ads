pragma Style_Checks (Off);
--  Code automatically generated by asn1scc tool
with adaasn1rtl;


pragma Warnings (Off, "unit ""System"" is not referenced");
with System;
pragma Warnings (On, "unit ""System"" is not referenced");

pragma Warnings (Off, "use clause for package ""adaasn1rtl"" has no effect");
use adaasn1rtl;
pragma Warnings (On, "use clause for package ""adaasn1rtl"" has no effect");

pragma Warnings (Off, "use clause for type");
pragma Warnings (Off, "is already use-visible through package use clause at line");
use type adaasn1rtl.OctetBuffer;
use type adaasn1rtl.BitArray;
use type adaasn1rtl.Asn1UInt;
use type adaasn1rtl.Asn1Int;
use type adaasn1rtl.BIT;
pragma Warnings (On, "use clause for type");
pragma Warnings (On, "is already use-visible through package use clause at line");



package TASTE_BasicTypes with SPARK_Mode
is


subtype asn1SccT_Int32 is adaasn1rtl.Asn1Int range -2147483648 .. 2147483647;


function asn1SccT_Int32_Equal(val1, val2 : asn1SccT_Int32) return Boolean;

function asn1SccT_Int32_Init return asn1SccT_Int32;

ERR_T_INT32:constant Integer := 15; 
function asn1SccT_Int32_IsConstraintValid(val : asn1SccT_Int32) return adaasn1rtl.ASN1_RESULT;
subtype asn1SccT_UInt32 is adaasn1rtl.Asn1UInt range 0 .. 4294967295;


function asn1SccT_UInt32_Equal(val1, val2 : asn1SccT_UInt32) return Boolean;

function asn1SccT_UInt32_Init return asn1SccT_UInt32;

ERR_T_UINT32:constant Integer := 22; 
function asn1SccT_UInt32_IsConstraintValid(val : asn1SccT_UInt32) return adaasn1rtl.ASN1_RESULT;
subtype asn1SccT_Int8 is adaasn1rtl.Asn1Int range -128 .. 127;


function asn1SccT_Int8_Equal(val1, val2 : asn1SccT_Int8) return Boolean;

function asn1SccT_Int8_Init return asn1SccT_Int8;

ERR_T_INT8:constant Integer := 29; 
function asn1SccT_Int8_IsConstraintValid(val : asn1SccT_Int8) return adaasn1rtl.ASN1_RESULT;
subtype asn1SccT_UInt8 is adaasn1rtl.Asn1UInt range 0 .. 255;


function asn1SccT_UInt8_Equal(val1, val2 : asn1SccT_UInt8) return Boolean;

function asn1SccT_UInt8_Init return asn1SccT_UInt8;

ERR_T_UINT8:constant Integer := 36; 
function asn1SccT_UInt8_IsConstraintValid(val : asn1SccT_UInt8) return adaasn1rtl.ASN1_RESULT;
subtype asn1SccT_Boolean is adaasn1rtl.Asn1Boolean;


function asn1SccT_Boolean_Equal(val1, val2 : asn1SccT_Boolean) return Boolean;

function asn1SccT_Boolean_Init return asn1SccT_Boolean;

ERR_T_BOOLEAN:constant Integer := 43; 
function asn1SccT_Boolean_IsConstraintValid(val : asn1SccT_Boolean) return adaasn1rtl.ASN1_RESULT;
-- asn1SccT_Null_Record --------------------------------------------

type asn1SccT_Null_Record is record 
    null;
end record;


function asn1SccT_Null_Record_Equal(val1, val2 : asn1SccT_Null_Record) return Boolean;

function asn1SccT_Null_Record_Init return asn1SccT_Null_Record;

ERR_T_NULL_RECORD:constant Integer := 50; 
function asn1SccT_Null_Record_IsConstraintValid(val : asn1SccT_Null_Record) return adaasn1rtl.ASN1_RESULT;
pragma Warnings (Off, "there are no others");
 
pragma Warnings (On, "there are no others");
private
   --# hide TASTE_BasicTypes;


end TASTE_BasicTypes;