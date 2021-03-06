#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_st("console");
    logger->info("version {} was started", version());

    return 0;
}
