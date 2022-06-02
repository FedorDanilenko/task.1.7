add_library(my_regex)

target_sources(my_regex
    PUBLIC
        my_regex.cxx
    PUBLIC
        my_regex.hxx
)

target_include_directories(my_regex
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

set_target_properties(my_regex PROPERTIES LINKER_LANGUAGE CXX)
