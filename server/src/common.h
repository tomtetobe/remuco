#ifndef REM_COMMON_H_
#define REM_COMMON_H_

///////////////////////////////////////////////////////////////////////////////
//
// commoon includes
//
///////////////////////////////////////////////////////////////////////////////

#include <glib.h>
#include <glib-object.h>

#include "log.h"

#define REM_VERSION					"0.7.1"

G_BEGIN_DECLS

///////////////////////////////////////////////////////////////////////////////
//
// some BPP related constants
//
///////////////////////////////////////////////////////////////////////////////

#define REM_BPP_FILE_SUFFIX			".bpp"

#define REM_ENV_BPP_LAUNCHER		"REM_BPP_STARTED_BY_LAUNCHER"

#define REM_ENV_BPP_EXTRA_DIR		"REM_EXTRA_BPP_DIR"

typedef enum {
	REM_BPP_RET_OK = 0,			// was running for a while, player is down now
	REM_BPP_RET_PLAYER_DOWN,	// did not start because player is down
	REM_BPP_RET_ERROR,			// an error occured
	REM_BPP_RET_SERVER_BYE		// stopped because server said bye
} RemBasicProxyReturn;

///////////////////////////////////////////////////////////////////////////////
//
// common macors
//
///////////////////////////////////////////////////////////////////////////////

////////// a sleep function with milli seconds //////////

#define g_msleep(_ms)		g_usleep((_ms) * 1000)

////////// an 'if-then' boolean expression //////////

#define concl(_a, _b)		((!(_a)) || ((_a) && (_b)))

#define memclr(_t, _p)		memset(_p, 0, sizeof(_t))

///////////////////////////////////////////////////////////////////////////////


G_END_DECLS

#endif /*REM_COMMON_H_*/
