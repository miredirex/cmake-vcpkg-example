#include <fmt/format.h>
#include <fmt/chrono.h>
#include "Document.h"

void Document::print(std::ostream& output) const
{
    output << fmt::format("\"{}\" by {} on {:%Y-%m-%d}\n\n", title, author, fmt::localtime(date))
           << fmt::format("{}", body);
}