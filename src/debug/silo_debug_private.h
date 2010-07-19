#ifndef DEBUG_PRIVATE_H
#define DEBUG_PRIVATE_H

/*

                           Copyright (c) 1991 - 2009
                The Regents of the University of California.
                            All rights reserved.

This work was produced at the University of California, Lawrence
Livermore National Laboratory (UC LLNL) under contract no.  W-7405-ENG-48
(Contract 48) between the U.S. Department of Energy (DOE) and The Regents
of the University of California (University) for the operation of UC LLNL.
Copyright is reserved to the University for purposes of controlled
dissemination, commercialization through formal licensing, or other
disposition under terms of Contract 48; DOE policies, regulations and
orders; and U.S. statutes.  The rights of the Federal Government are
reserved under Contract 48 subject to the restrictions agreed upon by
DOE and University.

                                DISCLAIMER

This software was prepared as an account of work sponsored by an agency
of the United States Government. Neither the United States Government
nor the University of California nor any of their employees, makes any
warranty, express or implied, or assumes any liability or responsiblity
for the accuracy, completeness, or usefullness of any information,
apparatus, product, or process disclosed, or represents that its use
would not infringe privately owned rights. Reference herein to any
specific commercial products, process, or service by trade name, trademark,
manufacturer, or otherwise, does not necessarily constitute or imply its
endorsement, recommendation, or favoring by the United States Government
or the University of California. The views and opinions of authors
expressed herein do not necessarily state or reflect those of the United
States Government or the University of California, and shall not be used
for advertising or product endorsement purposes.

*/

/*
 * SILO DEBUG Private header file
 *
 * This header file is included by all silo-debug source files and
 * contains constants and prototypes that should be visible to
 * SILO-DEBUG source files, but not to the application.
 */

#include "silo_private.h"

typedef struct DBfile_debug {
    DBfile_pub     pub;
    FILE          *file;
} DBfile_debug;

SILO_CALLBACK int db_debug_close(DBfile *);
SILO_CALLBACK DBcompoundarray *db_debug_GetCompoundarray(DBfile *, char *);
SILO_CALLBACK int db_debug_Filters(DBfile *, FILE *);
SILO_CALLBACK int db_debug_PutCompoundarray(DBfile *, char *, char **, int *,
                                       int, void *, int, int, DBoptlist *);

INTERNAL DBfile *db_debug_create(char *, int, int, int, char *);
INTERNAL DBfile *db_debug_open(char *, int, int);

#endif /* !DEBUG_PRIVATE_H */
