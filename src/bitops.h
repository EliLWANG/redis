#ifndef __BITOPS_H
#define __BITOPS_H

#include "redis.h"

static int getBitOffsetFromArgument (redisClient*,robj*,size_t*);

long popcount(void*,long);
void setbitCommand(redisClient*);
void getbitCommand(redisClient*);
void bitcountCommand(redisClient*);
void bitopCommand(redisClient*);

#endif
