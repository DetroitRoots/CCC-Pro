/*ISO/IEC 14882:1998 (C++98)
The standard lists 32 headers specific to C++ */

#include <algorithm>
#include <iomanip>
#include <list>
#include <ostream>
#include <streambuf>
#include <bitset>
#include <ios>
#include <locale>
#include <queue>
#include <string>
#include <complex>
#include <iosfwd>
#include <map>
#include <set>
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

/* There are also 18 headers corresponding to headers from C (corresponding to C94 */

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

/* 
    Intriguingly, Annex D (§D.7) lists a deprecated header, <strstream>, that is not mentioned earlier in the standard. 
    Including that header with GCC (g++) 7.2.0 generates a warning.
*/
/*
    /opt/gcc/v7.2.0/include/c++/7.2.0/backward/backward_warning.h:32:2: 
    warning: #warning This file includes at least one deprecated or antiquated 
    header which may be removed without further notice at a future date. 
    Please use a non-deprecated interface with equivalent functionality 
    instead. For a listing of replacement headers and interfaces, consult 
    the file backward_warning.h. To disable this warning use -Wno-deprecated. [-Wcpp] 
    */

//The header <strstream> is explicitly listed in the other versions of the standard.

/* 
ISO/IEC 14882:2011 (C++11)
The 53 C++ headers in C++11 */


