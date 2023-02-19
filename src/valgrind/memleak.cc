#include <cstdlib>

namespace valg {
namespace mleak {

void mleak() {
    int* p = reinterpret_cast<int*>(malloc(10 * sizeof(int)));
    p[10] = 0;        // problem 2: heap block overrun
    free(p);
}

}  /// namespace mleak
}  /// namespace valg