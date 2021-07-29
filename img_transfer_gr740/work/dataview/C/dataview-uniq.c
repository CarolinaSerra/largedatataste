/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>

#include "asn1crt_encoding.h"
#include "asn1crt_encoding_uper.h"
#include "asn1crt_encoding_acn.h"

#include "dataview-uniq.h"



flag asn1SccMyInteger_Equal(const asn1SccMyInteger* pVal1, const asn1SccMyInteger* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccMyInteger_Initialize(asn1SccMyInteger* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccMyInteger_IsConstraintValid(const asn1SccMyInteger* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 65540UL);
    *pErrCode = ret ? 0 :  ERR_MYINTEGER; 

	return ret;
}

flag asn1SccMyInteger_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 65540);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccMyInteger_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 65540);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_MYINTEGER;

	return ret  && asn1SccMyInteger_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccMyInteger_ACN_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 65540);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccMyInteger_ACN_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 65540);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_MYINTEGER;

    return ret && asn1SccMyInteger_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccRawData_Equal(const asn1SccRawData* pVal1, const asn1SccRawData* pVal2)
{
	flag ret=TRUE;
    int i1;

    for(i1 = 0; ret && i1 < 4194304; i1++) 
    {
    	ret = (pVal1->arr[i1] == pVal2->arr[i1]);
    }

	return ret;

}

void asn1SccRawData_Initialize(asn1SccRawData* pVal)
{
	(void)pVal;

    int i1;

	i1 = 0;
	while (i1< 4194304) {
	    asn1SccMyInteger_Initialize((&(pVal->arr[i1])));
	    i1 = i1 + 1;
	}

}

flag asn1SccRawData_IsConstraintValid(const asn1SccRawData* pVal, int* pErrCode)
{
    flag ret = TRUE;
    int i1;
    for(i1 = 0; ret && i1 < 4194304; i1++) 
    {
    	ret = asn1SccMyInteger_IsConstraintValid((&(pVal->arr[i1])), pErrCode);
    }

	return ret;
}

flag asn1SccRawData_Encode(const asn1SccRawData* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	int i1;
	asn1SccSint nBlockIndex1;
	asn1SccSint nCurBlockSize1;
	asn1SccSint nCurOffset1;
	ret = bCheckConstraints ? asn1SccRawData_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    //encode 64 x 64K Blocks
	    nCurBlockSize1 = 0x10000;
	    nCurOffset1 = 0;
	    for(nBlockIndex1 = 0; nBlockIndex1 < 64; nBlockIndex1++) {
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC4, 0, 0xFF); 
	    	for(i1=(int)nCurOffset1; i1 < (int)(nCurBlockSize1 + nCurOffset1); i1++)
	    	{
	    		ret = asn1SccMyInteger_Encode((&(pVal->arr[i1])), pBitStrm, pErrCode, FALSE);
	    	}

	        nCurOffset1 += nCurBlockSize1;
	    }
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccRawData_Decode(asn1SccRawData* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;

	int i1;
	asn1SccSint nBlockIndex1;
	asn1SccSint nRemainingItemsVar1;
	asn1SccSint nCurBlockSize1;
	asn1SccSint nCurOffset1;

	//we expect to decode 64 Blocks and each block must contain 64K elements. Each block must begin with the byte 0xC4
	nCurBlockSize1 = 0x10000;
	nCurOffset1 = 0;
	*pErrCode = ERR_UPER_DECODE_RAWDATA; 
	for(nBlockIndex1 = 0; ret && nBlockIndex1 < 64; nBlockIndex1++) {
	    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nRemainingItemsVar1, 0, 0xFF);
	    ret = ret && (nRemainingItemsVar1 == 0xC4);
	    *pErrCode = ret ? 0 : ERR_UPER_DECODE_RAWDATA;
		if (ret) {
		    for(i1=(int)nCurOffset1; i1 < (int)(nCurBlockSize1 + nCurOffset1); i1++) {
			    ret = asn1SccMyInteger_Decode((&(pVal->arr[i1])), pBitStrm, pErrCode);
		    }

	        nCurOffset1 += nCurBlockSize1;
		}
	}

	return ret  && asn1SccRawData_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccRawData_ACN_Encode(const asn1SccRawData* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	int i1;
	asn1SccSint nBlockIndex1;
	asn1SccSint nCurBlockSize1;
	asn1SccSint nCurOffset1;
	ret = bCheckConstraints ? asn1SccRawData_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    //encode 64 x 64K Blocks
	    nCurBlockSize1 = 0x10000;
	    nCurOffset1 = 0;
	    for(nBlockIndex1 = 0; nBlockIndex1 < 64; nBlockIndex1++) {
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC4, 0, 0xFF); 
	    	for(i1=(int)nCurOffset1; i1 < (int)(nCurBlockSize1 + nCurOffset1); i1++)
	    	{
	    		ret = asn1SccMyInteger_ACN_Encode((&(pVal->arr[i1])), pBitStrm, pErrCode, FALSE);
	    	}

	        nCurOffset1 += nCurBlockSize1;
	    }
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccRawData_ACN_Decode(asn1SccRawData* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;

	int i1;
	asn1SccSint nBlockIndex1;
	asn1SccSint nRemainingItemsVar1;
	asn1SccSint nCurBlockSize1;
	asn1SccSint nCurOffset1;

	//we expect to decode 64 Blocks and each block must contain 64K elements. Each block must begin with the byte 0xC4
	nCurBlockSize1 = 0x10000;
	nCurOffset1 = 0;
	*pErrCode = ERR_ACN_DECODE_RAWDATA; 
	for(nBlockIndex1 = 0; ret && nBlockIndex1 < 64; nBlockIndex1++) {
	    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nRemainingItemsVar1, 0, 0xFF);
	    ret = ret && (nRemainingItemsVar1 == 0xC4);
	    *pErrCode = ret ? 0 : ERR_ACN_DECODE_RAWDATA;
		if (ret) {
		    for(i1=(int)nCurOffset1; i1 < (int)(nCurBlockSize1 + nCurOffset1); i1++) {
			    ret = asn1SccMyInteger_ACN_Decode((&(pVal->arr[i1])), pBitStrm, pErrCode);
		    }

	        nCurOffset1 += nCurBlockSize1;
		}
	}

    return ret && asn1SccRawData_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Int32_Equal(const asn1SccT_Int32* pVal1, const asn1SccT_Int32* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((-2147483648LL <= (*(pVal))) && ((*(pVal)) <= 2147483647LL));
    *pErrCode = ret ? 0 :  ERR_T_INT32; 

	return ret;
}

flag asn1SccT_Int32_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -2147483648LL, 2147483647LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_INT32;

	return ret  && asn1SccT_Int32_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Int32_ACN_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -2147483648LL, 2147483647LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int32_ACN_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_INT32;

    return ret && asn1SccT_Int32_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_UInt32_Equal(const asn1SccT_UInt32* pVal1, const asn1SccT_UInt32* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 4294967295UL);
    *pErrCode = ret ? 0 :  ERR_T_UINT32; 

	return ret;
}

flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 4294967295LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_UINT32;

	return ret  && asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_UInt32_ACN_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 4294967295LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt32_ACN_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_UINT32;

    return ret && asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Int8_Equal(const asn1SccT_Int8* pVal1, const asn1SccT_Int8* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((-128LL <= (*(pVal))) && ((*(pVal)) <= 127LL));
    *pErrCode = ret ? 0 :  ERR_T_INT8; 

	return ret;
}

flag asn1SccT_Int8_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -128, 127);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_INT8;

	return ret  && asn1SccT_Int8_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Int8_ACN_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -128, 127);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int8_ACN_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_INT8;

    return ret && asn1SccT_Int8_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_UInt8_Equal(const asn1SccT_UInt8* pVal1, const asn1SccT_UInt8* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 255UL);
    *pErrCode = ret ? 0 :  ERR_T_UINT8; 

	return ret;
}

flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 255);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_UINT8;

	return ret  && asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_UInt8_ACN_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 255);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt8_ACN_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_UINT8;

    return ret && asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Boolean_Equal(const asn1SccT_Boolean* pVal1, const asn1SccT_Boolean* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal)
{
	(void)pVal;


	(*(pVal)) = FALSE;
}

flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
    ret = TRUE;
    *pErrCode = 0;

	return ret;
}

flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,(*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_BOOLEAN;

	return ret  && asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Boolean_ACN_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,(*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Boolean_ACN_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_BOOLEAN;

    return ret && asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Null_Record_Equal(const asn1SccT_Null_Record* pVal1, const asn1SccT_Null_Record* pVal2)
{
	(void)pVal1;
	(void)pVal2;
	return TRUE;

}

void asn1SccT_Null_Record_Initialize(asn1SccT_Null_Record* pVal)
{
	(void)pVal;


}

flag asn1SccT_Null_Record_IsConstraintValid(const asn1SccT_Null_Record* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
    ret = TRUE;
    *pErrCode = 0;

	return ret;
}

flag asn1SccT_Null_Record_Encode(const asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	(void)pBitStrm;


	ret = bCheckConstraints ? asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Null_Record_Decode(asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;
	(void)pBitStrm;



	return ret  && asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Null_Record_ACN_Encode(const asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	(void)pBitStrm;

	ret = bCheckConstraints ? asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Null_Record_ACN_Decode(asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	(void)pBitStrm;
	*pErrCode = 0;



    return ret && asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode);
}
