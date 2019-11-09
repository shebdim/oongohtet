#include "lib.h"

#include <spdlog/spdlog.h>

#include <optional>

int main()
{
    auto logger = spdlog::stdout_logger_st("console");
    logger->info("version {} was started", version());

    return 0;
}
