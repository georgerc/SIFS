#include <sys/stat.h> /* mode_t */
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stddef.h>
#include <pwd.h>
#include <grp.h>
#include "logger.h" /* logger */
#include "tree.h"
#include "fuse.h"
int sifs_mkdir(const char*, mode_t);
