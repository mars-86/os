#ifndef __OS_LIB_SYS_TYPES_INCLUDED_H__
#define __OS_LIB_SYS_TYPES_INCLUDED_H__

#ifdef _USE_STDINT_H

#ifdef HAVE_STDINT_H
#include <stdint.h>
#else
#error intX_t definitions missing
#endif

#else

#ifndef int8_t
// typedef char int8_t;
#endif
typedef short int16_t;
typedef int int32_t;
// typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
// typedef unsigned long long int uint64_t;

#endif

#ifdef __cplusplus
#undef NULL
#define NULL nullptr
// #else
// #define NULL ((void*)0)
#endif /* __cplusplus */

struct terminal_size {
    uint16_t row;
    uint16_t col;
    uint16_t row_max;
    uint16_t col_max;
};

typedef struct terminal_size terminal_size_t;

#endif // __OS_LIB_SYS_TYPES_INCLUDED_H__
