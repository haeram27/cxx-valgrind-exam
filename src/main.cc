#include <iostream>
#include <vector>

#include <unistd.h>

#include "util/logger.h"
#include "valgrind/memleak.h"

using namespace std;
using cmdline_args_t = vector<string>;

int main(int argc, char *argv[]) {
    util::logger::init(); // SPDLOG_INFO("this is spdlog!");
    cmdline_args_t args(&argv[0], &argv[argc]);

    valg::mleak::mleak();

    return 0;
}
