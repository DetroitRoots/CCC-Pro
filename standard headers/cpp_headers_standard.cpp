/*ISO/IEC 9899:1990 (C89, C90)
The 15 standard headers in C89 are: */

#include <assert.h>
#include <assert.h>
#include <limits.h>
#include <signal.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#include <stddef.h>
#include <time.h>
#include <float.h>
#include <setjmp.h>
#include <stdio.h>

/* ISO/IEC 9899:1990/Amd.1:1995
The 3 extra headers introduced in C94 */

//Amendmend 1

#include <iso646.h> 
#include <wchar.h>
#include <wchar.h>
#include <wctype.h>

/* ISO/IEC 9899:1999 (C99)
The 6 extra headers in C99 */

#include <complex.h>
#include <fenv.h>
#include <inttypes.h>
#include <stdint.h>
#include <tgmath.h>
#include <fenv.h>
#include <stdbool.h>

/* ISO/IEC 9899:2011 (C11)
The 5 extra headers in C2011 (for a total of 29) */

#include <stdalign.h>
#include <stdatomic.h>
#include <stdnoreturn.h>
//#include <threads.h>
#include <uchar.h>


/*ISO/IEC 9045:2008 (POSIX 2008, Single Unix Specification)

Note that POSIX requires many more headers 
(82, including all the C99 headers). 
The list below repeats the standard C (C99) headers. 
Windows requires a different set of headers.  */

#include <aio.h>
#include <libgen.h>
#include <spawn.h>
#include <sys/time.h>
#include <sys/times.h>
#include <stdarg.h>
#include <arpa/inet.h>
#include <limits.h>
#include <assert.h>
#include <locale.h>
#include <stdbool.h>
#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <sys/uio.h>
#include <cpio.h>
#include <sys/un.h>
#include <ctype.h>
#include <mqueue.h>
#include <stdio.h>
#include <sys/utsname.h>
#include <dirent.h>
//#include <ndbm.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <dlfcn.h>
#include <net/if.h>
#include <string.h>
#include <syslog.h>
#include <errno.h>
#include <netdb.h>
#include <strings.h>
#include <tar.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <stropts.h>
#include <termios.h>
#include <fenv.h>
#include <sys/ipc.h>
#include <tgmath.h>
#include <float.h>
#include <nl_types.h>
#include <sys/mman.h>
#include <time.h>
#include <fmtmsg.h>
#include <poll.h>
#include <sys/msg.h>
//#include <trace.h>
#include <fnmatch.h>
#include <pthread.h>
#include <sys/resource.h>
#include <ulimit.h>
#include <ftw.h>
#include <pwd.h>
#include <sys/select.h>
#include <unistd.h>
#include <glob.h>
#include <regex.h>
#include <sys/sem.h>
#include <unistd.h>
#include <glob.h>
#include <regex.h>
#include <sys/sem.h>
#include <utime.h>
#include <grp.h>
#include <utmpx.h>
#include <iconv.h>
#include <sched.h>
#include <sys/shm.h>
#include <iconv.h>
#include <search.h>
#include <sys/socket.h>
#include <wchar.h>
#include <wctype.h>
#include <inttypes.h>
#include <semaphore.h>
#include <sys/stat.h>
#include <iso646.h>
#include <setjmp.h>
#include <sys/statvfs.h>
#include <wordexp.h>
#include <langinfo.h>
#include <signal.h>

/* X/Open Curses requires another set of headers. 
There was a new version (Release 7) of that specification released in November 2009 (the first update since 1996 
the primary differences are the loss of official support for termcap and pre-standard C <varargs.h> header). */

#include <curses.h> 
#include <term.h>
#include <uncntrl.h>

/* LINUX STANDARDS BASE -> There are other headers that you might need to use. 
There is no mention of <getopt.h> in these lists, but if you are using GNU Getopt (for long options, for example), you will need and use that header. 
It is standard on Linux according to the LSB, Linux Standards Base. 
An older version of the LSB was defined as ISO/IEC 23360:2006 in multiple parts; 
as of 2014-09-21, the current version of the LSB is 4.1 but version 5.0 is in beta. 
There is a section of the document that defines which headers are included, but there is no convenient table of the headers in the version I looked at. 
It is closely aligned with POSIX, but has extra facilities beyond what POSIX defines. */

// C++ Standards 
//ISO/IEC 14882:1998 (C++98)
//The standard lists 32 headers specific to C++

#include <algorithm
#include <iomanip>
#include <list>
#include <ostream>
#include <streambuf>
#include <bitset>
#include <string>
#include <complex>
#include <ios>
#include <iosfwd>
#include <locale>
#include <queue>
#include <map>
#include <set>
#include <typeinfo>
#include <deque>
#include <iostream>
#include <memory>
#include <sstream>
#include <utility>
#include <exception>
#include <istream>
#include <new>
#include <stack>
#include <valarray>
#include <fstream>
#include <iterator>
#include <numeric>
#include <stdexcept>
#include <vector>
#include <functional>
#include <limits>

//There are also 18 headers corresponding to headers from C (corresponding to C94)

#include <cassert>
#include <ciso646>
#include <csetjmp>
#include <cstdio>
#include <ctime>
#include <cctype>
#include <climits>
#include <csignal>
#include <cstdlib>
#include <cwchar>
#include <cerrno>
#include <clocale>
#include <cstdarg>
#include <cstring>
#include <cwctype>
#include <cfloat>
#include <cmath>
#include <cstddef>

//Intriguingly, Annex D (§D.7) lists a deprecated header, <strstream>,
// that is not mentioned earlier in the standard. 
//Including that header with GCC (g++) 7.2.0 generates a warning

/*
    /opt/gcc/v7.2.0/include/c++/7.2.0/backward/backward_warning.h:32:2: 
    warning: #warning This file includes at least one deprecated or antiquated 
    header which may be removed without further notice at a future date. 
    Please use a non-deprecated interface with equivalent functionality 
    instead. For a listing of replacement headers and interfaces, consult 
    the file backward_warning.h. To disable this warning use -Wno-deprecated. [-Wcpp] 
*/

// The header <strstream> is explicitly listed in the other versions of the standard.

/*
ISO/IEC 14882:2011 (C++11)
The 53 C++ headers in C++11 */
