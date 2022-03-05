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

#include <algorithm>
#include <initializer_list>
#include <numeric>
#include <system_error>
#include <array>
#include <iomanip>
#include <ostream>
#include <thread>
#include <atomic>
#include <ios>
#include <queue>
#include <tuple>
#include <bitset>
#include <iosfwd>
#include <random>
#include <type_traits>
#include <chrono>
#include <iostream>
#include <ratio>
#include <typeindex>
#include <codecvt>
#include <istream>
#include <regex>
#include <typeinfo>
#include <complex>
#include <iterator>
#include <scoped_allocator>
#include <unordered_map>
#include <condition_variable>
#include <limits>
#include <set>
#include <unordered_set>
#include <deque>
#include <list>
#include <sstream>
#include <utility>
#include <exception>
#include <locale>
#include <stack>
#include <valarray>
#include <forward_list>
#include <map>
#include <stdexcept>
#include <vector>
#include <fstream>
#include <memory>
#include <streambuf>
#include <functional>
#include <mutex>
#include <string>
#include <future>
#include <new>
#include <strstream>

//The 26 headers related to C (C11)

#include <cassert>
#include <cinttypes>
#include <csignal>
#include <cstdio>
#include <cwchar>
#include <complex>
#include <ciso646>
#include <cstdalign>
#include <cstdlib>
#include <cwctype>
#include <cctype>
#include <climits>
#include <cstdarg>
#include <cstring>
#include <cerrno>
#include <clocale>
#include <cstdbool>
#include <ctgmath>
#include <cfenv>
#include <cmath>
#include <cstddef>
#include <ctime>
#include <cfloat>
#include <csetjmp>
#include <cstdint>
#include <cuchar>

/*
    ISO/IEC 14882:2014 (C++14)

    Provisional list of headers based on draft standard N3797 found at ISO/IEC JTC1/SC22/WG21 site. 
    The data is from tables 14 and 15 in section 17.6.1.2 Headers, amended as noted below.
    Since the standard has not been published (as of 2014-09-21), this list is not yet definitive. 
*/
