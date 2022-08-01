#pragma once

#include "snapshot.h"

//for open db
typedef struct options{
    int gc_interval_us;
}opt_t;

///for read
typedef struct roptions{
    const snapshot_t *snap;
    roptions(): 
        snap(nullptr){
    }
}ropt_t;

//for write
typedef struct woptions{
    bool flush;
}wopt_t;
