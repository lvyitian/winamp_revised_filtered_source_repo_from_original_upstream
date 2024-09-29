//
//  precomp.h
//  nu
//

#include "foundation/error.h"
#include "foundation/types.h"
#include "foundation/atomics.h"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#ifdef WIN32
#include <arch.h>
#else
#include <pthread.h>
#endif //WIN32
