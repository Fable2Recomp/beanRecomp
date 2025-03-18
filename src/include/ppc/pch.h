#pragma once

// C standard library
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// C++ standard library
#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <chrono>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <filesystem>

// Windows-specific headers
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <io.h>
#include <direct.h>
#include <process.h>

// Project-specific headers
#include "../Thirdparty/SDL3/include/SDL3/SDL.h"
#include "./UnleashedRecomp/kernel/toml.hpp"
#include "./UnleashedRecomp/kernel/xam.h"

// Standard library includes
#include <cstdint>
#include <cstddef>
#include <cstring>

// Project headers
#include "ppc_types.h"
#include "ppc_config.h"
#include "ppc_context.h"
#include "ppc_recomp_shared.h"

