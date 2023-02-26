#ifndef _WIN32_INCLUDED_H_
#define _WIN32_INCLUDED_H_

#ifdef _WIN32

#include <windows.h>
#include "base/inout.h"
#include "platform.h"
#include "error/error.h"

void* _init_instance(ContainerSize* cs);

#endif /* _WIN32 */

#endif /* _WIN32_INCLUDED_H_ */
