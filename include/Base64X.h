/*
///////////////////////////////////////////////////////////////////////////////
//
//  FileName    :   Base64X.h
//  Version     :   1.0
//  Creator     :   RM
//  Create Date :   2006-01-01
//  Comment     :
//
///////////////////////////////////////////////////////////////////////////////
*/

#ifndef __BASE64X_H__
#define __BASE64X_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*
///////////////////////////////////////////////////////////////////////////////
// D E F I N E S
///////////////////////////////////////////////////////////////////////////////
*/

/*
///////////////////////////////////////////////////////////////////////////////
// S T R U C T U R E S
///////////////////////////////////////////////////////////////////////////////
*/

/*
///////////////////////////////////////////////////////////////////////////////
// G L O B A L S
///////////////////////////////////////////////////////////////////////////////
*/

/*
///////////////////////////////////////////////////////////////////////////////
// F U N C T I O N S
///////////////////////////////////////////////////////////////////////////////
*/
unsigned long Base64EncodeX( char *OutputBuffer, const char *InputBuffer, unsigned long Length );
unsigned long Base64DecodeX( char *OutputBuffer, const char *InputBuffer, unsigned long Length );

#ifdef __cplusplus
}
#endif
/*
///////////////////////////////////////////////////////////////////////////////
// E N D  O F  F I L E
///////////////////////////////////////////////////////////////////////////////
*/
#endif /* __BASE64X_H__ */