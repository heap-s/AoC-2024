set(aoc-2024_SRCS
    aoc-2024.cpp
)

ecm_qt_declare_logging_category(aoc-2024_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_AOC_2024
    CATEGORY_NAME "kdevelop.plugins.aoc-2024"
    DESCRIPTION "KDevelop plugin: AoC-2024"
    EXPORT AOC_2024
)

kdevplatform_add_plugin(aoc-2024
    SOURCES ${aoc-2024_SRCS}
)

target_link_libraries(aoc-2024
    KDev::Interfaces
)
